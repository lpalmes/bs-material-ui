[@bs.module "material-ui/Form"] external formLabel : ReasonReact.reactClass = "FormLabel";

let make =
    (
      ~disabled=?,
      ~error=?,
      ~focused=?,
      ~required=?,
      ~margin: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formLabel,
    ~props=
      Js.Undefined.(
        {
          "disabled": Utils.unwrapBool(disabled),
          "error": Utils.unwrapBool(error),
          "focused": Utils.unwrapBool(focused),
          "required": Utils.unwrapBool(required),
          "margin": from_opt(margin),
          "className": from_opt(className),
          "style": from_opt(style)
        }
      ),
    children
  );
