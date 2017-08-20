external cardActions : ReasonReact.reactClass = "CardActions" [@@bs.module "material-ui"];

let make ::disableActionSpacing=? style::(style: option ReactDOMRe.style)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::cardActions
    props::
      Js.Undefined.(
        {"disableActionSpacing": disableActionSpacing |> Utils.unwrapBool, "style": from_opt style}
      )
    children;
