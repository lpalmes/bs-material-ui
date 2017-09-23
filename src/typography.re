external typography : ReasonReact.reactClass = "Typography" [@@bs.module "material-ui"];

let make
    ::paragraph=?
    ::noWrap=?
    ::gutterBottom=?
    textType::(textType: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::typography
    props::
      Js.Undefined.(
        {
          "paragraph": paragraph |> Utils.unwrapBool,
          "noWrap": noWrap |> Utils.unwrapBool,
          "gutterBottom": gutterBottom |> Utils.unwrapBool,
          "style": from_opt style,
          "type": from_opt textType
        }
      )
    children;
