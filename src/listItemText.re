external listItemText : ReasonReact.reactClass = "ListItemText" [@@bs.module "material-ui"];

let make
    className::(className: option string)=?
    style::(style: option ReactDOMRe.style)=?
    primary::(primary: option string)=?
    secondary::(secondary: option string)=?
    ::inset=?
    ::disableTypography=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::listItemText
    props::
      Js.Undefined.(
        {
          "inset": Utils.unwrapBool inset,
          "disableTypography": Utils.unwrapBool disableTypography,
          "style": from_opt style,
          "className": from_opt className,
          "primary": from_opt primary,
          "secondary": from_opt secondary
        }
      )
    children;
