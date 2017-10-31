[@bs.module "material-ui"] external grid : ReasonReact.reactClass = "Grid";

let make =
    (
      ~align: option(string)=?,
      ~component: option(string)=?,
      ~direction: option(string)=?,
      ~wrap: option(string)=?,
      ~justify: option(string)=?,
      ~xl: option(int)=?,
      ~lg: option(int)=?,
      ~md: option(int)=?,
      ~sm: option(int)=?,
      ~xs: option(int)=?,
      ~spacing: option(int)=?,
      ~container: option(bool)=?,
      ~item: option(bool)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=grid,
    ~props=
      Js.Undefined.(
        {
          "container": container |> Utils.unwrapBool,
          "item": item |> Utils.unwrapBool,
          "style": from_opt(style),
          "className": from_opt(className),
          "align": from_opt(align),
          "component": from_opt(component),
          "direction": from_opt(direction),
          "wrap": from_opt(wrap),
          "justify": from_opt(justify),
          "xl": from_opt(xl),
          "lg": from_opt(lg),
          "md": from_opt(md),
          "sm": from_opt(sm),
          "xs": from_opt(xs),
          "spacing": from_opt(spacing),
          "wrp": from_opt(wrap)
        }
      ),
    children
  );
