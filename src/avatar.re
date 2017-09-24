external avatar : ReasonReact.reactClass = "" [@@bs.module "material-ui/Avatar"];

let make
    alt::(alt: option string)=?
    className::(className: option string)=?
    classes::(classes: option 't)=?
    childrenClassName::(childrenClassName: option string)=?
    component::(component: option string)=?
    imgProps::(imgProps: option (Js.t {..}))=?
    sizes::(sizes: option string)=?
    src::(src: option string)=?
    srcSet::(srcSet: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::avatar
    props::
      Js.Undefined.(
        {
          "alt": from_opt alt,
          "childrenClassName": from_opt childrenClassName,
          "className": from_opt className,
          "classes": from_opt classes,
          "component": from_opt component,
          "imgProps": from_opt imgProps,
          "sizes": from_opt sizes,
          "src": from_opt src,
          "srcSet": from_opt srcSet,
          "style": from_opt style
        }
      )
    children;
