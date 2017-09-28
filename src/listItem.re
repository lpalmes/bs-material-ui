external paper : ReasonReact.reactClass = "Paper" [@@bs.module "material-ui"];

/* button	boolean	false	If true, the ListItem will be a button.
   children	Node		The content of the component.
   classes	Object		Useful to extend the style applied to components.
   component	ElementType	'li'	The component used for the root node. Either a string to use a DOM element or a component.
   dense	boolean	false	If true, compact vertical padding designed for keyboard and mouse input will be used.
   disableGutters	boolean	false	If true, the left and right padding is removed.
   divider	boolean	false	If true, a 1px light border is added to the bottom of the list item. */
let make
    ::button=?
    ::dense=?
    ::disableGutters=?
    ::divider=?
    onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
    className::(className: option string)=?
    component::(component: option string)=?
    style::(style: option ReactDOMRe.style)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::paper
    props::
      Js.Undefined.(
        {
          "dense": Utils.unwrapBool dense,
          "button": Utils.unwrapBool button,
          "disableGutters": Utils.unwrapBool disableGutters,
          "divider": Utils.unwrapBool divider,
          "style": from_opt style,
          "component": from_opt component,
          "className": from_opt className,
          "onClick": from_opt onClick
        }
      )
    children;
