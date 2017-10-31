[@bs.module "material-ui"] external chip : ReasonReact.reactClass = "Chip";

let make =
    (
      ~avatar: option(array(ReasonReact.reactElement))=?,
      ~label: string,
      ~style: option(ReactDOMRe.style)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=chip,
    ~props=Js.Undefined.({"avatar": from_opt(avatar), "style": from_opt(style), "label": label}),
    children
  );
