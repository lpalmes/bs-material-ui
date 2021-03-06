// Generated by BUCKLESCRIPT VERSION 1.9.2, PLEASE EDIT WITH CARE
'use strict';

var Curry      = require("bs-platform/lib/js/curry.js");
var Js_boolean = require("bs-platform/lib/js/js_boolean.js");

function unwrapBool(opt) {
  if (opt) {
    return Js_boolean.to_js_boolean(opt[0]);
  } else {
    return undefined;
  }
}

function option_map(fn, opt_value) {
  if (opt_value) {
    return /* Some */[Curry._1(fn, opt_value[0])];
  } else {
    return /* None */0;
  }
}

exports.unwrapBool = unwrapBool;
exports.option_map = option_map;
/* No side effect */
