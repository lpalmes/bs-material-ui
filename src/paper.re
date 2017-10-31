[@bs.module "material-ui"] external paper : ReasonReact.reactClass = "Paper";

let make =
    (
      ~elevation: option(int)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      ~square=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=paper,
    ~props=
      Js.Undefined.(
        {
          "square": square |> Utils.unwrapBool,
          "elevation": from_opt(elevation),
          "style": from_opt(style),
          "className": from_opt(className)
        }
      ),
    children
  );
