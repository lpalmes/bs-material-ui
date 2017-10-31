[@bs.module "material-ui"] external list : ReasonReact.reactClass = "List";

let make =
    (
      ~dense=?,
      ~disablePadding=?,
      ~className: option(string)=?,
      ~component: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      ~subheader: option(ReasonReact.reactElement)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=list,
    ~props=
      Js.Undefined.(
        {
          "dense": Utils.unwrapBool(dense),
          "disablePadding": Utils.unwrapBool(disablePadding),
          "style": from_opt(style),
          "component": from_opt(component),
          "className": from_opt(className),
          "subheader": from_opt(subheader)
        }
      ),
    children
  );
