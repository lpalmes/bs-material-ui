external cardMedia : ReasonReact.reactClass = "CardMedia" [@@bs.module "material-ui"];

let make style::(style: option ReactDOMRe.style)=? image::(image: option string)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::cardMedia
    props::Js.Undefined.({"style": from_opt style, "image": from_opt image})
    children;
