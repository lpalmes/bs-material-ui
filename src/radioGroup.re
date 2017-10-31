[@bs.module "material-ui/Radio"] external radioGroup : ReasonReact.reactClass = "RadioGroup";

let make =
    (
      ~name: option(string)=?,
      ~onChange: option(((ReactEventRe.Selection.t, string) => unit))=?,
      ~value: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=radioGroup,
    ~props=
      Js.Undefined.(
        {
          "name": from_opt(name),
          "onChange": from_opt(onChange),
          "value": from_opt(value),
          "style": from_opt(style),
          "className": from_opt(className)
        }
      ),
    children
  );
