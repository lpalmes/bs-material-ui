[@bs.module "material-ui"] external badge : ReasonReact.reactClass = "Badge";

let make =
    (~badgeContent: array(ReasonReact.reactElement), ~style: option(ReactDOMRe.style)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=badge,
    ~props=Js.Undefined.({"badgeContent": badgeContent, "style": from_opt(style)}),
    children
  );
