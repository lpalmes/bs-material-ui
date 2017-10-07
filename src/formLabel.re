external formLabel : ReasonReact.reactClass = "FormLabel" [@@bs.module "material-ui/Form"];

let make
    ::disabled=?
    ::error=?
    ::focused=?
    ::required=?
    margin::(margin: option string)=?
    className::(className: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::formLabel
    props::
      Js.Undefined.(
        {
          "disabled": Utils.unwrapBool disabled,
          "error": Utils.unwrapBool error,
          "focused": Utils.unwrapBool focused,
          "required": Utils.unwrapBool required,
          "margin": from_opt margin,
          "className": from_opt className,
          "style": from_opt style
        }
      )
    children;
