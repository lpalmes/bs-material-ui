type muiTheme;

type color = {
  .
  "_50": string,
  "_100": string,
  "_200": string,
  "_300": string,
  "_400": string,
  "_500": string,
  "_600": string,
  "_700": string,
  "_800": string,
  "_900": string,
  "a100": string,
  "a200": string,
  "a400": string,
  "a700": string,
  "contrastDefaultColor": string
};

type palette = {
  primary: option(color),
  accent: option(color),
  error: option(color),
  _type: option(string)
};

[@bs.get_index] external getColor : (color, int) => string = "";

type themeOptions = {palette: option(palette)};

[@bs.val] [@bs.module "material-ui/colors"] external teal : color = "";

[@bs.module "material-ui/styles"] external createMuiTheme : themeOptions => muiTheme = "";

let createTheme = (options: themeOptions) => createMuiTheme(options);

module Provider = {
  [@bs.module "material-ui/styles"] external provider : ReasonReact.reactClass =
    "MuiThemeProvider";
  let make = (~theme: muiTheme, children) =>
    ReasonReact.wrapJsForReason(~reactClass=provider, ~props={"theme": theme}, children);
};
