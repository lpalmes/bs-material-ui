external paper : ReasonReact.reactClass = "Paper" [@@bs.module "material-ui"];

let make
    elevation::(elevation: option int)=?
    className::(className: option string)=?
    ::square=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::paper
    props::
      Js.Undefined.(
        {
          "square": square |> Utils.unwrapBool,
          "elevation": from_opt elevation,
          "style": from_opt style,
          "className": from_opt className
        }
      )
    children;
