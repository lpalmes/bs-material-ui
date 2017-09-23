external collapse : ReasonReact.reactClass = "material-ui/transitions/Collapse" [@@bs.module];

let make expanded::(expanded: bool) ::transitionDuration=? children =>
  ReasonReact.wrapJsForReason
    reactClass::collapse
    props::
      Js.Undefined.(
        {
          "in": Js.Boolean.to_js_boolean expanded,
          "transitionDuration": from_opt transitionDuration
        }
      )
    children;
