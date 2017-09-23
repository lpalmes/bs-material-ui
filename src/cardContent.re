external cardContent : ReasonReact.reactClass = "CardContent" [@@bs.module "material-ui"];

let make style::(style: option ReactDOMRe.style)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::cardContent props::Js.Undefined.({"style": from_opt style}) children;
