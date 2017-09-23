external dialogTitle : ReasonReact.reactClass = "DialogTitle" [@@bs.module "material-ui"];

type dialogTitleClasses = {root: option string};

let make
    classes::(classes: option dialogTitleClasses)=?
    disableTypography::(disableTypography: option bool)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::dialogTitle
    props::
      Js.Undefined.({"classes": from_opt classes, "disableTypography": from_opt disableTypography})
    children;
