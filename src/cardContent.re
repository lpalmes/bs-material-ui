[@bs.module "material-ui"] external cardContent : ReasonReact.reactClass = "CardContent";

let make = (~style: option(ReactDOMRe.style)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardContent,
    ~props=Js.Undefined.({"style": from_opt(style)}),
    children
  );
