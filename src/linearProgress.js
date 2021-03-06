// Generated by BUCKLESCRIPT VERSION 1.9.2, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact              = require("reason-react/src/reasonReact.js");
var Js_undefined             = require("bs-platform/lib/js/js_undefined.js");
var MaterialUi$slashProgress = require("material-ui/Progress");

function make(style, className, color, value, valueBuffer, mode, children) {
  return ReasonReact.wrapJsForReason(MaterialUi$slashProgress.LinearProgress, {
              style: Js_undefined.from_opt(style),
              mode: Js_undefined.from_opt(mode),
              color: Js_undefined.from_opt(color),
              valueBuffer: Js_undefined.from_opt(valueBuffer),
              value: Js_undefined.from_opt(value),
              className: Js_undefined.from_opt(className)
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
