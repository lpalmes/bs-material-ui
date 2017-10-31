[@bs.module "material-ui"] external dialogTitle : ReasonReact.reactClass = "DialogTitle";

type dialogTitleClasses = {root: option(string)};

let make = (~classes: option(dialogTitleClasses)=?, ~disableTypography: option(bool)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dialogTitle,
    ~props=
      Js.Undefined.(
        {"classes": from_opt(classes), "disableTypography": from_opt(disableTypography)}
      ),
    children
  );
