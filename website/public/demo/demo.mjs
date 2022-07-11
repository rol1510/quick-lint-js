// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

import { createProcessFactoryAsync } from "../../wasm/quick-lint-js.js";
import { markEditorText } from "./editor.mjs";
import {} from "../error-box.mjs";

let codeInputElement = document.getElementById("code-input");
let codeInputMarksElement = document.getElementById("code-input-marks");
let shadowCodeInputElement = document.getElementById("shadow-code-input");

codeInputElement.addEventListener("scroll", (event) => {
  synchronizeScrolling();
});
synchronizeContent();

if (typeof window.ResizeObserver !== "undefined") {
  new window.ResizeObserver(synchronizeSize).observe(codeInputElement);
}

class FloatingEditorMarker {
  constructor(editor, marksContainer) {
    this._markElements = [];
    this._editor = editor;
    this._marksContainer = marksContainer;
  }

  setMarks(marks, text) {
    let textNode = this._editor.childNodes[0];
    if (typeof textNode === 'undefined') {
      return;
    }

    let marksContainerRect = this._marksContainer.getBoundingClientRect();
    let offsetX = -marksContainerRect.left;
    let offsetY = -marksContainerRect.top;

    let range = window.document.createRange();
    let markElementIndex = 0;
    for (let mark of marks) {
      range.setStart(textNode, mark.begin);
      range.setEnd(textNode, mark.end);
      let rects = range.getClientRects();
      for (let r of rects) {
        let markElement = this._getOrCreateMark(markElementIndex++);
        markElement.style.display = 'inline';
        markElement.style.left = `${r.left + offsetX}px`;
        markElement.style.top = `${r.top + offsetY}px`;
        markElement.style.width = `${r.width}px`;
        markElement.style.height = `${r.height}px`;
        markElement.setAttribute("data-message", mark.message);
        markElement.setAttribute("data-code", mark.code);
        markElement.setAttribute("data-severity", mark.severity);
        markElement.textContent = text.slice(mark.begin, mark.end);
      }
    }

    for (let i = markElementIndex; i < this._markElements.length; ++i) {
      this._markElements[i].style.display = 'none';
    }
  }

  _getOrCreateMark(markElementIndex) {
    return markElementIndex >= this._markElements.length ? this._createMark() : this._markElements[markElementIndex];
  }

  _createMark() {
    let markElement = document.createElement('mark');
    markElement.classList.add('floating-mark');
    this._marksContainer.appendChild(markElement);
    this._markElements.push(markElement);
    return markElement;
  }
}

createProcessFactoryAsync()
  .then(async (processFactory) => {
    async function createDocumentAsync() {
      let process = await processFactory.createProcessAsync();
      let doc = await process.createDocumentForWebDemoAsync();
      return doc;
    }

    let pendingDocument = null;
    let doc = null;

    function processCrashed() {
      // Make the next call to lintAndUpdate call restartProcessThenLint.
      doc = null;
      pendingDocument = null;
    }

    function restartProcessThenLint() {
      doc = null;
      pendingDocument = createDocumentAsync().then((newDoc) => {
        doc = newDoc;
        pendingDocument = null;
        lintAndUpdate();
      });
    }

    let marker = new FloatingEditorMarker(shadowCodeInputElement, codeInputMarksElement);

    function lintAndUpdate() {
      if (doc === null) {
        restartProcessThenLint();
        // restartProcess will call us later.
        return;
      }

      synchronizeContent();

      let input = codeInputElement.value;
      let marks;
      try {
        doc.setText(input);
        marks = doc.lint();
      } catch (e) {
        // TODO(strager): Show the error to the user.
        marks = [];
        processCrashed();
      }
      marker.setMarks(marks, input);
    }
    codeInputElement.addEventListener("input", (event) => {
      lintAndUpdate();
    });
    lintAndUpdate();
  })
  .catch((error) => {
    // TODO(strager): Show this error to the user.
    console.error(error);
  });

function synchronizeContent() {
  let input = codeInputElement.value;
  shadowCodeInputElement.textContent = input + "\n\n\n";
}

function synchronizeScrolling() {
  shadowCodeInputElement.scrollLeft = codeInputElement.scrollLeft;
  shadowCodeInputElement.scrollTop = codeInputElement.scrollTop;
}

function synchronizeSize() {
  shadowCodeInputElement.style.width = codeInputElement.style.width;
  shadowCodeInputElement.style.height = codeInputElement.style.height;
}

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
