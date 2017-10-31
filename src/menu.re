[@bs.module "material-ui"] external menu : ReasonReact.reactClass = "Menu";

let make =
    (
      ~openMenu=?,
      ~onRequestClose: option((ReactEventRe.Mouse.t => unit))=?,
      ~className: option(string)=?,
      ~anchorEl: option(Dom.element),
      ~style: option(ReactDOMRe.style)=?,
      ~value: option('a)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=menu,
    ~props=
      Js.Undefined.(
        {
          "open": Utils.unwrapBool(openMenu),
          "style": from_opt(style),
          "anchorEl": from_opt(anchorEl),
          "className": from_opt(className),
          "value": from_opt(value),
          "onRequestClose": from_opt(onRequestClose)
        }
      ),
    children
  );
