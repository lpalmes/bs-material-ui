external collapse : ReasonReact.reactClass = "" [@@bs.module "material-ui/transitions/Collapse"];

let make
    expanded::(expanded: option bool)=?
    transitionDuration::(transitionDuration: option string)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::collapse
    props::
      Js.Undefined.(
        {"in": Utils.unwrapBool expanded, "transitionDuration": from_opt transitionDuration}
      )
    children;
