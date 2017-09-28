external grid : ReasonReact.reactClass = "Grid" [@@bs.module "material-ui"];

let make
    align::(align: option string)=?
    component::(component: option string)=?
    direction::(direction: option string)=?
    wrap::(wrap: option string)=?
    justify::(justify: option string)=?
    xl::(xl: option int)=?
    lg::(lg: option int)=?
    md::(md: option int)=?
    sm::(sm: option int)=?
    xs::(xs: option int)=?
    spacing::(spacing: option int)=?
    container::(container: option bool)=?
    item::(item: option bool)=?
    className::(className: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::grid
    props::
      Js.Undefined.(
        {
          "container": container |> Utils.unwrapBool,
          "item": item |> Utils.unwrapBool,
          "style": from_opt style,
          "className": from_opt className,
          "align": from_opt align,
          "component": from_opt component,
          "direction": from_opt direction,
          "wrap": from_opt wrap,
          "justify": from_opt justify,
          "xl": from_opt xl,
          "lg": from_opt lg,
          "md": from_opt md,
          "sm": from_opt sm,
          "xs": from_opt xs,
          "spacing": from_opt spacing,
          "wrp": from_opt wrap
        }
      )
    children;
