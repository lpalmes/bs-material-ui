[@bs.module "material-ui"] external appBar : ReasonReact.reactClass = "AppBar";

let make =
    (
      ~color: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      ~position: option(string)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=appBar,
    ~props=
      Js.Undefined.(
        {"color": from_opt(color), "style": from_opt(style), "position": from_opt(position)}
      ),
    children
  );
