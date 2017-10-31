[@bs.module "material-ui"] external checkbox : ReasonReact.reactClass = "Checkbox";

let make =
    /* technically a union bool|string but why are you passing a string to `checked`? */
    (
      ~checked: option(bool)=?,
      ~checkedClassName: option(string)=?,
      ~checkedIcon: option(ReasonReact.reactElement)=?,
      /* TODO classes */
      ~disableRipple: option(bool)=?,
      ~disabled: option(bool)=?,
      ~disabledClassName: option(string)=?,
      ~icon: option(ReasonReact.reactElement)=?,
      ~indeterminate: option(bool)=?,
      ~indeterminateIcon: option(ReasonReact.reactElement)=?,
      /* TODO inputProps */
      /* TODO inputRef */
      ~name: option(string)=?,
      ~onChange: option(((ReactEventRe.Selection.t, bool) => unit))=?,
      ~value: option(string)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=checkbox,
    ~props=
      Js.Undefined.(
        {
          "checked": from_opt(checked),
          "checkedClassName": from_opt(checkedClassName),
          "checkedIcon": from_opt(checkedIcon),
          "disableRipple": from_opt(disableRipple),
          "disabled": from_opt(disabled),
          "disabledClassName": from_opt(disabledClassName),
          "icon": from_opt(icon),
          "indeterminate": from_opt(indeterminate),
          "indeterminateIcon": from_opt(indeterminateIcon),
          "name": from_opt(name),
          "onChange": from_opt(onChange),
          "value": from_opt(value)
        }
      ),
    children
  );
