external badge : ReasonReact.reactClass = "" [@@bs.module "material-ui/Badge"];

let make
    badgeContent::(badgeContent: array ReasonReact.reactElement)
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::badge
    props::Js.Undefined.({"badgeContent": badgeContent, "style": from_opt style})
    children;
