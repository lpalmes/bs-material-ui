external select : ReasonReact.reactClass = "Select" [@@bs.module "material-ui"];

let make
    ::multiple=?
    ::native=?
    className::(className: option string)=?
    component::(component: option string)=?
    style::(style: option ReactDOMRe.style)=?
    value::(value: option 'a)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::select
    props::
      Js.Undefined.(
        {
          "multiple": Utils.unwrapBool multiple,
          "native": Utils.unwrapBool native,
          "style": from_opt style,
          "component": from_opt component,
          "className": from_opt className,
          "value": from_opt value
        }
      )
    children;
