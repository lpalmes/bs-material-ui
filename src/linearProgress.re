[@bs.module "material-ui/Progress"] external linearProgress : ReasonReact.reactClass =
  "LinearProgress";

let make =
    (
      ~style: option(ReactDOMRe.style)=?,
      ~className: option(string)=?,
      ~color: option(string)=?,
      ~value: option(int)=?,
      ~valueBuffer: option(int)=?,
      ~mode: option(string)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=linearProgress,
    ~props=
      Js.Undefined.(
        {
          "style": from_opt(style),
          "mode": from_opt(mode),
          "color": from_opt(color),
          "valueBuffer": from_opt(valueBuffer),
          "value": from_opt(value),
          "className": from_opt(className)
        }
      ),
    children
  );
