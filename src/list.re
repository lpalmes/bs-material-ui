external list : ReasonReact.reactClass = "List" [@@bs.module "material-ui"];

let make
    ::dense=?
    ::disablePadding=?
    className::(className: option string)=?
    component::(component: option string)=?
    style::(style: option ReactDOMRe.style)=?
    subheader::(subheader: option ReasonReact.reactElement)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::list
    props::
      Js.Undefined.(
        {
          "dense": Utils.unwrapBool dense,
          "disablePadding": Utils.unwrapBool disablePadding,
          "style": from_opt style,
          "component": from_opt component,
          "className": from_opt className,
          "subheader": from_opt subheader
        }
      )
    children;
