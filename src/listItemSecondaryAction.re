[@bs.module "material-ui"] external listItemSecondaryAction : ReasonReact.reactClass =
  "ListItemSecondaryAction";

let make = (~className: option(string)=?, ~style: option(ReactDOMRe.style)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listItemSecondaryAction,
    ~props=Js.Undefined.({"style": from_opt(style), "className": from_opt(className)}),
    children
  );
