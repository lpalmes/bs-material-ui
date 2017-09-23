external toolbar : ReasonReact.reactClass = "Toolbar" [@@bs.module "material-ui"];

let make ::disableGutters=? style::(style: option ReactDOMRe.style)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::toolbar
    props::
      Js.Undefined.(
        {"style": from_opt style, "disableGutters": disableGutters |> Utils.unwrapBool}
      )
    children;
