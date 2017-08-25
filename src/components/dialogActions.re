external dialogActions : ReasonReact.reactClass = "DialogActions" [@@bs.module "material-ui"];

type dialogActionsClasses = {
  root: option string,
  action: option string,
  button: option string
};

let make classes::(classes: option dialogActionsClasses)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::dialogActions props::Js.Undefined.({"classes": from_opt classes}) children;
