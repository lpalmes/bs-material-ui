[@bs.module "material-ui/transitions/Collapse"] external collapse : ReasonReact.reactClass = "";

let make = (~expanded: option(bool)=?, ~transitionDuration: option(string)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=collapse,
    ~props=
      Js.Undefined.(
        {"in": Utils.unwrapBool(expanded), "transitionDuration": from_opt(transitionDuration)}
      ),
    children
  );
