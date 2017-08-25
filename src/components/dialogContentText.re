external dialogContentText : ReasonReact.reactClass =
  "DialogContentText" [@@bs.module "material-ui"];

let make style::(style: option ReactDOMRe.style)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::dialogContentText props::Js.Undefined.({"style": from_opt style}) children;
