// Generated by BUCKLESCRIPT VERSION 1.9.2, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact           = require("reason-react/src/reasonReact.js");
var Js_undefined          = require("bs-platform/lib/js/js_undefined.js");
var MaterialUi$slashRadio = require("material-ui/Radio");

function make(name, onChange, value, className, style, children) {
  return ReasonReact.wrapJsForReason(MaterialUi$slashRadio.RadioGroup, {
              name: Js_undefined.from_opt(name),
              onChange: Js_undefined.from_opt(onChange),
              value: Js_undefined.from_opt(value),
              style: Js_undefined.from_opt(style),
              className: Js_undefined.from_opt(className)
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
