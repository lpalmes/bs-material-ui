external linearProgress : ReasonReact.reactClass =
  "LinearProgress" [@@bs.module "material-ui/Progress"];

let make
    style::(style: option ReactDOMRe.style)=?
    className::(className: option string)=?
    color::(color: option string)=?
    value::(value: option int)=?
    valueBuffer::(valueBuffer: option int)=?
    mode::(mode: option string)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::linearProgress
    props::
      Js.Undefined.(
        {
          "style": from_opt style,
          "mode": from_opt mode,
          "color": from_opt color,
          "valueBuffer": from_opt valueBuffer,
          "value": from_opt value,
          "className": from_opt className
        }
      )
    children;
