external card : ReasonReact.reactClass = "" [@@bs.module "material-ui/Card"];

let make ::raised=? style::(style: option ReactDOMRe.style)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::card
    props::Js.Undefined.({"raised": raised |> Utils.unwrapBool, "style": from_opt style})
    children;
