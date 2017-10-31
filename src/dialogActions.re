[@bs.module "material-ui"] external dialogActions : ReasonReact.reactClass = "DialogActions";

type dialogActionsClasses = {
  root: option(string),
  action: option(string),
  button: option(string)
};

let make = (~classes: option(dialogActionsClasses)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dialogActions,
    ~props=Js.Undefined.({"classes": from_opt(classes)}),
    children
  );
