external cardHeader : ReasonReact.reactClass = "cardHeader" [@@bs.module "material-ui"];

let make
    style::(style: option ReactDOMRe.style)=?
    avatar::(avatar: option (array ReasonReact.reactElement))=?
    subheader::(subheader: option (array ReasonReact.reactElement))=?
    title::(title: option (array ReasonReact.reactElement))=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::cardHeader
    props::
      Js.Undefined.(
        {
          "style": from_opt style,
          "avatar": from_opt avatar,
          "subheader": from_opt subheader,
          "title": from_opt title
        }
      )
    children;
