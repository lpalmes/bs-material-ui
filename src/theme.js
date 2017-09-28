// Generated by BUCKLESCRIPT VERSION 1.9.2, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact            = require("reason-react/src/reasonReact.js");
var MaterialUi$slashstyles = require("material-ui/styles");

function createTheme(options) {
  return MaterialUi$slashstyles.createMuiTheme(options);
}

function make(theme, children) {
  return ReasonReact.wrapJsForReason(MaterialUi$slashstyles.MuiThemeProvider, {
              theme: theme
            }, children);
}

var Provider = /* module */[/* make */make];

exports.createTheme = createTheme;
exports.Provider    = Provider;
/* ReasonReact Not a pure module */