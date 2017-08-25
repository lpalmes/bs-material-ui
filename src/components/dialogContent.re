external dialogContent : ReasonReact.reactClass = "DialogContent" [@@bs.module "material-ui"];

type dialogContentClasses = {root: option string};

let make classes::(classes: option dialogContentClasses)=? children =>
  ReasonReact.wrapJsForReason
    reactClass::dialogContent props::Js.Undefined.({"classes": from_opt classes}) children;
