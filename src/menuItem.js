// Generated by BUCKLESCRIPT VERSION 1.9.2, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact        = require("reason-react/src/reasonReact.js");
var MaterialUi         = require("material-ui");
var Js_undefined       = require("bs-platform/lib/js/js_undefined.js");
var Utils$BsMaterialUi = require("./utils.js");

function make(selected, onClick, className, component, style, value, children) {
  return ReasonReact.wrapJsForReason(MaterialUi.MenuItem, {
              selected: Utils$BsMaterialUi.unwrapBool(selected),
              style: Js_undefined.from_opt(style),
              component: Js_undefined.from_opt(component),
              className: Js_undefined.from_opt(className),
              value: Js_undefined.from_opt(value),
              onClick: Js_undefined.from_opt(onClick)
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
