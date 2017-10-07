external card : ReasonReact.reactClass = "Card" [@@bs.module "material-ui"];

let make
    ::raised=?
    style::(style: option ReactDOMRe.style)=?
    className::(className: option string)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::card
    props::
      Js.Undefined.(
        {
          "raised": raised |> Utils.unwrapBool,
          "style": from_opt style,
          "className": from_opt className
        }
      )
    children;
