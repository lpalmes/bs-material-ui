external radio : ReasonReact.reactClass = "Radio" [@@bs.module "material-ui"];

let make
    /* technically a union bool|string but why are you passing a string to `checked`? */
    checked::(checked: option bool)=?
    checkedClassName::(checkedClassName: option string)=?
    checkedIcon::(checkedIcon: option ReasonReact.reactElement)=?
    /* TODO classes */
    disableRipple::(disableRipple: option bool)=?
    disabled::(disabled: option bool)=?
    disabledClassName::(disabledClassName: option string)=?
    icon::(icon: option ReasonReact.reactElement)=?
    indeterminate::(indeterminate: option bool)=?
    indeterminateIcon::(indeterminateIcon: option ReasonReact.reactElement)=?
    /* TODO inputProps */
    /* TODO inputRef */
    name::(name: option string)=?
    onChange::(onChange: option (ReactEventRe.Selection.t => bool => unit))=?
    value::(value: option string)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::radio
    props::
      Js.Undefined.(
        {
          "checked": from_opt checked,
          "checkedClassName": from_opt checkedClassName,
          "checkedIcon": from_opt checkedIcon,
          "disableRipple": from_opt disableRipple,
          "disabled": from_opt disabled,
          "disabledClassName": from_opt disabledClassName,
          "icon": from_opt icon,
          "indeterminate": from_opt indeterminate,
          "indeterminateIcon": from_opt indeterminateIcon,
          "name": from_opt name,
          "onChange": from_opt onChange,
          "value": from_opt value
        }
      )
    children;
