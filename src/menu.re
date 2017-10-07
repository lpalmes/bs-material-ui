external menu : ReasonReact.reactClass = "Menu" [@@bs.module "material-ui"];

let make
    ::openMenu=?
    onRequestClose::(onRequestClose: option (ReactEventRe.Mouse.t => unit))=?
    className::(className: option string)=?
    anchorEl::(anchorEl: option Dom.element)
    style::(style: option ReactDOMRe.style)=?
    value::(value: option 'a)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::menu
    props::
      Js.Undefined.(
        {
          "open": Utils.unwrapBool openMenu,
          "style": from_opt style,
          "anchorEl": from_opt anchorEl,
          "className": from_opt className,
          "value": from_opt value,
          "onRequestClose": from_opt onRequestClose
        }
      )
    children;
