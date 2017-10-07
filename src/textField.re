external textField : ReasonReact.reactClass = "TextField" [@@bs.module "material-ui"];

let make
    ::disableUnderline=?
    ::disabled=?
    ::error=?
    ::autoFocus=?
    ::fullWidth=?
    ::select=?
    style::(style: option ReactDOMRe.style)=?
    value::(value: option string)=?
    label::(label: option string)=?
    onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
    placeholder::(placeholder: option string)=?
    className::(className: option string)=?
    helperText::(helperText: option string)=?
    inputType::(inputType: option string)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::textField
    props::
      Js.Undefined.(
        {
          "disableUnderline": disableUnderline |> Utils.unwrapBool,
          "disabled": disabled |> Utils.unwrapBool,
          "error": error |> Utils.unwrapBool,
          "fullWidth": fullWidth |> Utils.unwrapBool,
          "autoFocus": autoFocus |> Utils.unwrapBool,
          "select": select |> Utils.unwrapBool,
          "style": from_opt style,
          "placeholder": from_opt placeholder,
          "className": from_opt className,
          "helperText": from_opt helperText,
          "type": from_opt inputType,
          "value": from_opt value,
          "onChange": from_opt onChange,
          "label": from_opt label
        }
      )
    children;
