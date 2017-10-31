[@bs.module "material-ui"] external buttonBase : ReasonReact.reactClass = "ButtonBase";

let make =
    (
      ~style: option(ReactDOMRe.style)=?,
      ~onClick: option((ReactEventRe.Mouse.t => unit))=?,
      ~component: option(string)=?,
      ~className: option(string)=?,
      ~centerRipple=?,
      ~disableRipple=?,
      ~focusRipple=?,
      ~disabled=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonBase,
    ~props=
      Js.Undefined.(
        {
          "focusRipple": focusRipple |> Utils.unwrapBool,
          "centerRipple": centerRipple |> Utils.unwrapBool,
          "disableRipple": disableRipple |> Utils.unwrapBool,
          "disabled": disabled |> Utils.unwrapBool,
          "onClick": onClick |> Js.Undefined.from_opt,
          "component": from_opt(component),
          "className": from_opt(className),
          "style": from_opt(style)
        }
      ),
    children
  );
