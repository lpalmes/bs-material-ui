[@bs.module "material-ui"] external cardHeader : ReasonReact.reactClass = "cardHeader";

let make =
    (
      ~style: option(ReactDOMRe.style)=?,
      ~avatar: option(array(ReasonReact.reactElement))=?,
      ~subheader: option(array(ReasonReact.reactElement))=?,
      ~title: option(array(ReasonReact.reactElement))=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardHeader,
    ~props=
      Js.Undefined.(
        {
          "style": from_opt(style),
          "avatar": from_opt(avatar),
          "subheader": from_opt(subheader),
          "title": from_opt(title)
        }
      ),
    children
  );
