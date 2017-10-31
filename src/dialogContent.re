[@bs.module "material-ui"] external dialogContent : ReasonReact.reactClass = "DialogContent";

type dialogContentClasses = {root: option(string)};

let make = (~classes: option(dialogContentClasses)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dialogContent,
    ~props=Js.Undefined.({"classes": from_opt(classes)}),
    children
  );
