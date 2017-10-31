[@bs.module "material-ui"] external cardActions : ReasonReact.reactClass = "CardActions";

let make = (~disableActionSpacing=?, ~style: option(ReactDOMRe.style)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardActions,
    ~props=
      Js.Undefined.(
        {
          "disableActionSpacing": disableActionSpacing |> Utils.unwrapBool,
          "style": from_opt(style)
        }
      ),
    children
  );
