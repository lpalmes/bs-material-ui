[@bs.module "material-ui"] external listItemText : ReasonReact.reactClass = "ListItemText";

let make =
    (
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      ~primary: option(string)=?,
      ~secondary: option(string)=?,
      ~inset=?,
      ~disableTypography=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listItemText,
    ~props=
      Js.Undefined.(
        {
          "inset": Utils.unwrapBool(inset),
          "disableTypography": Utils.unwrapBool(disableTypography),
          "style": from_opt(style),
          "className": from_opt(className),
          "primary": from_opt(primary),
          "secondary": from_opt(secondary)
        }
      ),
    children
  );
