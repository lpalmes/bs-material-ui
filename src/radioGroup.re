external radioGroup : ReasonReact.reactClass = "RadioGroup" [@@bs.module "material-ui/Radio"];

let make
    name::(name: option string)=?
    onChange::(onChange: option (ReactEventRe.Selection.t => string => unit))=?
    value::(value: option string)=?
    className::(className: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::radioGroup
    props::
      Js.Undefined.(
        {
          "name": from_opt name,
          "onChange": from_opt onChange,
          "value": from_opt value,
          "style": from_opt style,
          "className": from_opt className
        }
      )
    children;
