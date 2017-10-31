[@bs.module "material-ui/Progress"] external circularProgress : ReasonReact.reactClass =
  "CircularProgress";

let make =
    (
      ~style: option(ReactDOMRe.style)=?,
      ~className: option(string)=?,
      ~color: option(string)=?,
      ~value: option(int)=?,
      ~valueBuffer: option(int)=?,
      ~mode: option(string)=?,
      ~size: option(int)=?,
      ~max: option(int)=?,
      ~min: option(int)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=circularProgress,
    ~props=
      Js.Undefined.(
        {
          "style": from_opt(style),
          "mode": from_opt(mode),
          "color": from_opt(color),
          "valueBuffer": from_opt(valueBuffer),
          "value": from_opt(value),
          "size": from_opt(size),
          "max": from_opt(max),
          "min": from_opt(min),
          "className": from_opt(className)
        }
      ),
    children
  );
