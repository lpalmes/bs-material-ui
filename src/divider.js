// Generated by BUCKLESCRIPT VERSION 1.9.2, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact        = require("reason-react/src/reasonReact.js");
var MaterialUi         = require("material-ui");
var Utils$BsMaterialUi = require("./utils.js");

function make(inset, light, absolute, children) {
  return ReasonReact.wrapJsForReason(MaterialUi.Divider, {
              light: Utils$BsMaterialUi.unwrapBool(light),
              inset: Utils$BsMaterialUi.unwrapBool(inset),
              absolute: Utils$BsMaterialUi.unwrapBool(absolute)
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
