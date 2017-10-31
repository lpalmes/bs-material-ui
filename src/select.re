[@bs.module "material-ui"] external select : ReasonReact.reactClass = "Select";

let make =
    (
      ~multiple=?,
      ~native=?,
      ~className: option(string)=?,
      ~component: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      ~value: option('a)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=select,
    ~props=
      Js.Undefined.(
        {
          "multiple": Utils.unwrapBool(multiple),
          "native": Utils.unwrapBool(native),
          "style": from_opt(style),
          "component": from_opt(component),
          "className": from_opt(className),
          "value": from_opt(value)
        }
      ),
    children
  );
