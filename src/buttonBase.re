external buttonBase : ReasonReact.reactClass = "ButtonBase" [@@bs.module "material-ui"];

let make
    onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
    component::(component: option string)=?
    className::(className: option string)=?
    ::centerRipple=?
    ::disableRipple=?
    ::focusRipple=?
    ::disabled=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::buttonBase
    props::{
      "focusRipple": focusRipple |> Utils.unwrapBool,
      "centerRipple": centerRipple |> Utils.unwrapBool,
      "disableRipple": disableRipple |> Utils.unwrapBool,
      "disabled": disabled |> Utils.unwrapBool,
      "onClick": onClick |> Js.Undefined.from_opt,
      "component": Js.Undefined.from_opt component,
      "className": Js.Undefined.from_opt className
    }
    children;
