[@bs.module "material-ui"] external dialogContentText : ReasonReact.reactClass =
  "DialogContentText";

let make = (~style: option(ReactDOMRe.style)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dialogContentText,
    ~props=Js.Undefined.({"style": from_opt(style)}),
    children
  );
