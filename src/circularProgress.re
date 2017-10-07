external circularProgress : ReasonReact.reactClass =
  "CircularProgress" [@@bs.module "material-ui/Progress"];

let make
    style::(style: option ReactDOMRe.style)=?
    className::(className: option string)=?
    color::(color: option string)=?
    value::(value: option int)=?
    valueBuffer::(valueBuffer: option int)=?
    mode::(mode: option string)=?
    size::(size: option int)=?
    max::(max: option int)=?
    min::(min: option int)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::circularProgress
    props::
      Js.Undefined.(
        {
          "style": from_opt style,
          "mode": from_opt mode,
          "color": from_opt color,
          "valueBuffer": from_opt valueBuffer,
          "value": from_opt value,
          "size": from_opt size,
          "max": from_opt max,
          "min": from_opt min,
          "className": from_opt className
        }
      )
    children;
