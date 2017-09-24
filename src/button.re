external button : ReasonReact.reactClass = "" [@@bs.module "material-ui/Button"];

let make
    ::raised=?
    onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
    ::dense=?
    ::disableFocusRipple=?
    ::disableRipple=?
    ::disabled=?
    ::fab=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::button
    props::{
      "raised": raised |> Utils.unwrapBool,
      "dense": dense |> Utils.unwrapBool,
      "disableFocusRipple": disableFocusRipple |> Utils.unwrapBool,
      "disableRipple": disableRipple |> Utils.unwrapBool,
      "disabled": disabled |> Utils.unwrapBool,
      "fab": fab |> Utils.unwrapBool,
      "onClick": onClick |> Js.Undefined.from_opt
    }
    children;
