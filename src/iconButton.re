[@bs.module "material-ui"] external iconButton : ReasonReact.reactClass = "IconButton";

let make = (~onClick=?, ~dense=?, ~disableRipple=?, ~disabled=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=iconButton,
    ~props={
      "dense": dense |> Utils.unwrapBool,
      "disableRipple": disableRipple |> Utils.unwrapBool,
      "disabled": disabled |> Utils.unwrapBool,
      "onClick": onClick |> Js.Undefined.from_opt
    },
    children
  );
