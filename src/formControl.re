external formControl : ReasonReact.reactClass = "FormControl" [@@bs.module "material-ui/Form"];

let make
    ::disabled=?
    ::error=?
    ::fullWidth=?
    ::required=?
    margin::(margin: option string)=?
    className::(className: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::formControl
    props::
      Js.Undefined.(
        {
          "disabled": Utils.unwrapBool disabled,
          "error": Utils.unwrapBool error,
          "fullWidth": Utils.unwrapBool fullWidth,
          "required": Utils.unwrapBool required,
          "margin": from_opt margin,
          "className": from_opt className,
          "style": from_opt style
        }
      )
    children;
