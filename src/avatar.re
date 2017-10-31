[@bs.module "material-ui"] external avatar : ReasonReact.reactClass = "Avatar";

let make =
    (
      ~alt: option(string)=?,
      ~className: option(string)=?,
      ~classes: option('t)=?,
      ~childrenClassName: option(string)=?,
      ~component: option(string)=?,
      ~imgProps: option(Js.t({..}))=?,
      ~sizes: option(string)=?,
      ~src: option(string)=?,
      ~srcSet: option(string)=?,
      ~style: option(ReactDOMRe.style)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=avatar,
    ~props=
      Js.Undefined.(
        {
          "alt": from_opt(alt),
          "childrenClassName": from_opt(childrenClassName),
          "className": from_opt(className),
          "classes": from_opt(classes),
          "component": from_opt(component),
          "imgProps": from_opt(imgProps),
          "sizes": from_opt(sizes),
          "src": from_opt(src),
          "srcSet": from_opt(srcSet),
          "style": from_opt(style)
        }
      ),
    children
  );
