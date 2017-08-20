external chip : ReasonReact.reactClass = "Chip" [@@bs.module "material-ui"];

let make
    avatar::(avatar: option (array ReasonReact.reactElement))=?
    label::(label: string)
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::chip
    props::Js.Undefined.({"avatar": from_opt avatar, "style": from_opt style, "label": label})
    children;
