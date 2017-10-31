[@bs.module "material-ui/Form"] external formControl : ReasonReact.reactClass = "FormControl";

let make =
    (
      ~disabled=?,
      ~error=?,
      ~fullWidth=?,
      ~required=?,
      ~margin: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formControl,
    ~props=
      Js.Undefined.(
        {
          "disabled": Utils.unwrapBool(disabled),
          "error": Utils.unwrapBool(error),
          "fullWidth": Utils.unwrapBool(fullWidth),
          "required": Utils.unwrapBool(required),
          "margin": from_opt(margin),
          "className": from_opt(className),
          "style": from_opt(style)
        }
      ),
    children
  );
