[@bs.module "material-ui/Form"] external formControlLabel : ReasonReact.reactClass =
  "FormControlLabel";

let make =
    /* technically a union bool|string but why are you passing a string to `checked`? */
    (
      ~disabled=?,
      ~checked: option(bool)=?,
      ~control: option(ReasonReact.reactElement)=?,
      ~label: option(string)=?,
      ~name: option(string)=?,
      ~onChange: option((ReactEventRe.Selection.t => unit))=?,
      ~value: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formControlLabel,
    ~props=
      Js.Undefined.(
        {
          "checked": from_opt(checked),
          "label": from_opt(label),
          "control": from_opt(control),
          "disabled": Utils.unwrapBool(disabled),
          "name": from_opt(name),
          "onChange": from_opt(onChange),
          "value": from_opt(value),
          "style": from_opt(style),
          "className": from_opt(className)
        }
      ),
    children
  );
