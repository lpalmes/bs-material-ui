external formControlLabel : ReasonReact.reactClass =
  "FormControlLabel" [@@bs.module "material-ui/Form"];

let make
    /* technically a union bool|string but why are you passing a string to `checked`? */
    ::disabled=?
    checked::(checked: option bool)=?
    control::(control: option ReasonReact.reactElement)=?
    label::(label: option string)=?
    name::(name: option string)=?
    onChange::(onChange: option (ReactEventRe.Selection.t => unit))=?
    value::(value: option string)=?
    className::(className: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::formControlLabel
    props::
      Js.Undefined.(
        {
          "checked": from_opt checked,
          "label": from_opt label,
          "control": from_opt control,
          "disabled": Utils.unwrapBool disabled,
          "name": from_opt name,
          "onChange": from_opt onChange,
          "value": from_opt value,
          "style": from_opt style,
          "className": from_opt className
        }
      )
    children;
