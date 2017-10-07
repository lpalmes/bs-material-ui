external menuItem : ReasonReact.reactClass = "MenuItem" [@@bs.module "material-ui"];

let make
    ::selected=?
    onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
    className::(className: option string)=?
    component::(component: option string)=?
    style::(style: option ReactDOMRe.style)=?
    value::(value: option 'a)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::menuItem
    props::
      Js.Undefined.(
        {
          "selected": Utils.unwrapBool selected,
          "style": from_opt style,
          "component": from_opt component,
          "className": from_opt className,
          "value": from_opt value,
          "onClick": from_opt onClick
        }
      )
    children;
