external listItemSecondaryAction : ReasonReact.reactClass =
  "ListItemSecondaryAction" [@@bs.module "material-ui"];

let make className::(className: option string)=? style::(style: option ReactDOMRe.style)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::listItemSecondaryAction
    props::Js.Undefined.({"style": from_opt style, "className": from_opt className})
    children;
