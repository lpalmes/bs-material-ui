external badge : ReasonReact.reactClass = "Badge" [@@bs.module "material-ui"];

let make
    badgeContent::(badgeContent: array ReasonReact.reactElement)
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::badge
    props::Js.Undefined.({"badgeContent": badgeContent, "style": from_opt style})
    children;
