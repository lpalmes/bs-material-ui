type muiTheme;

type color =
  Js.t {
    .
    _50 : string,
    _100 : string,
    _200 : string,
    _300 : string,
    _400 : string,
    _500 : string,
    _600 : string,
    _700 : string,
    _800 : string,
    _900 : string,
    a100 : string,
    a200 : string,
    a400 : string,
    a700 : string,
    contrastDefaultColor : string
  };

type palette = {
  primary: option color,
  accent: option color,
  error: option color,
  _type: option string
};

external getColor : color => int => string = "" [@@bs.get_index];

type themeOptions = {palette: option palette};

external teal : color = "" [@@bs.val] [@@bs.module "material-ui/colors"];

external createMuiTheme : themeOptions => muiTheme = "" [@@bs.module "material-ui/styles"];

let createTheme (options: themeOptions) => createMuiTheme options;

module Provider = {
  external provider : ReasonReact.reactClass =
    "MuiThemeProvider" [@@bs.module "material-ui/styles"];
  let make theme::(theme: muiTheme) children =>
    ReasonReact.wrapJsForReason reactClass::provider props::{"theme": theme} children;
};
