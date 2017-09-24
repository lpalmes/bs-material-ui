external appBar : ReasonReact.reactClass = "" [@@bs.module "material-ui/AppBar"];

let make
    color::(color: option string)=?
    style::(style: option ReactDOMRe.style)=?
    position::(position: option string)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::appBar
    props::
      Js.Undefined.(
        {"color": from_opt color, "style": from_opt style, "position": from_opt position}
      )
    children;
