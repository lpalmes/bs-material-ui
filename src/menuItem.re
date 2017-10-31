[@bs.module "material-ui"] external menuItem : ReasonReact.reactClass = "MenuItem";

let make =
    (
      ~selected=?,
      ~onClick: option((ReactEventRe.Mouse.t => unit))=?,
      ~className: option(string)=?,
      ~component: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      ~value: option('a)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=menuItem,
    ~props=
      Js.Undefined.(
        {
          "selected": Utils.unwrapBool(selected),
          "style": from_opt(style),
          "component": from_opt(component),
          "className": from_opt(className),
          "value": from_opt(value),
          "onClick": from_opt(onClick)
        }
      ),
    children
  );
