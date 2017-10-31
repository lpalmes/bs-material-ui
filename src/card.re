[@bs.module "material-ui"] external card : ReasonReact.reactClass = "Card";

let make = (~raised=?, ~style: option(ReactDOMRe.style)=?, ~className: option(string)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=card,
    ~props=
      Js.Undefined.(
        {
          "raised": raised |> Utils.unwrapBool,
          "style": from_opt(style),
          "className": from_opt(className)
        }
      ),
    children
  );
