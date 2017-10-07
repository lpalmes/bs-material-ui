external divider : ReasonReact.reactClass = "Divider" [@@bs.module "material-ui"];

let make ::inset=? ::light=? ::absolute=? children =>
  ReasonReact.wrapJsForReason
    reactClass::divider
    props::
      Js.Undefined.(
        {
          "light": Utils.unwrapBool light,
          "inset": Utils.unwrapBool inset,
          "absolute": Utils.unwrapBool absolute
        }
      )
    children;
