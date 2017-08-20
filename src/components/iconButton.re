external iconButton : ReasonReact.reactClass = "IconButton" [@@bs.module "material-ui"];

let make ::onClick=? ::dense=? ::disableRipple=? ::disabled=? children =>
  ReasonReact.wrapJsForReason
    reactClass::iconButton
    props::
      Js.Undefined.(
        {
          "dense": dense |> Utils.unwrapBool,
          "disableRipple": disableRipple |> Utils.unwrapBool,
          "disabled": disabled |> Utils.unwrapBool,
          "onClick": onClick |> Js.Undefined.from_opt
        }
      )
    children;
