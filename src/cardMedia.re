[@bs.module "material-ui"] external cardMedia : ReasonReact.reactClass = "CardMedia";

let make = (~style: option(ReactDOMRe.style)=?, ~image: option(string)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardMedia,
    ~props=Js.Undefined.({"style": from_opt(style), "image": from_opt(image)}),
    children
  );
