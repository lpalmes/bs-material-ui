[@bs.module "material-ui"] external toolbar : ReasonReact.reactClass = "Toolbar";

let make = (~disableGutters=?, ~style: option(ReactDOMRe.style)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=toolbar,
    ~props=
      Js.Undefined.(
        {"style": from_opt(style), "disableGutters": disableGutters |> Utils.unwrapBool}
      ),
    children
  );
