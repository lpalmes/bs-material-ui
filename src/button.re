[@bs.module "material-ui"] external button : ReasonReact.reactClass = "Button";

let make =
    (
      ~raised=?,
      ~onClick: option((ReactEventRe.Mouse.t => unit))=?,
      ~className: option(string)=?,
      ~dense=?,
      ~disableFocusRipple=?,
      ~disableRipple=?,
      ~disabled=?,
      ~fab=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=button,
    ~props={
      "raised": raised |> Utils.unwrapBool,
      "dense": dense |> Utils.unwrapBool,
      "disableFocusRipple": disableFocusRipple |> Utils.unwrapBool,
      "disableRipple": disableRipple |> Utils.unwrapBool,
      "disabled": disabled |> Utils.unwrapBool,
      "fab": fab |> Utils.unwrapBool,
      "onClick": onClick |> Js.Undefined.from_opt,
      "className": Js.Undefined.from_opt(className)
    },
    children
  );
