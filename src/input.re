external input : ReasonReact.reactClass = "Input" [@@bs.module "material-ui"];

/* autoComplete	string		This property helps users to fill forms faster, especially on mobile devices. The name can be confusion, it's more like an autofill. You can learn about it with that article https://developers.google.com/web/updates/2015/06/checkout-faster-with-autofill
   autoFocus	boolean		If true, the input will be focused during the first mount.
   className	string		The CSS class name of the wrapper element.
   classes	Object		Useful to extend the style applied to components.
   defaultValue	union: string
    number
   The default input value, useful when not controlling the component.
   disableUnderline	boolean	false	If true, the input will not have an underline.
   disabled	boolean		If true, the input will be disabled.
   error	boolean		If true, the input will indicate an error. This is normally obtained via context from FormControl.
   fullWidth	boolean	false	If true, the input will take up the full width of its container.
   id	string		The id of the input element.
   inputComponent	union: string
    ComponentType<*>
   The component used for the input node. Either a string to use a DOM element or a component. It's an input by default.
   inputProps	Object		Properties applied to the input element.
   inputRef	Function		Use that property to pass a ref callback to the native input component.
   margin	union: 'dense'
    'none'
   If dense, will adjust vertical spacing. This is normally obtained via context from FormControl.
   multiline	boolean	false	If true, a textarea element will be rendered.
   name	string		Name attribute of the input element.
   onChange	signature		Callback fired when the value is changed.

   Signature:
   function(event: object) => void
   event: The event source of the callback
   onClean	signature		TODO
   onDirty	signature		TODO
   placeholder	string		The short hint displayed in the input before the user enters a value.
   rows	union: string
    number
   Number of rows to display when multiline option is set to true.
   rowsMax	union: string
    number
   Maximum number of rows to display when multiline option is set to true.
   type	string	'text'	Type of the input element. It should be a valid HTML5 input type.
   value */
let make
    ::disableUnderline=?
    ::disabled=?
    ::error=?
    ::autoFocus=?
    ::fullWidth=?
    style::(style: option ReactDOMRe.style)=?
    value::(value: option string)=?
    onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
    placeholder::(placeholder: option string)=?
    className::(className: option string)=?
    inputType::(inputType: option string)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::input
    props::
      Js.Undefined.(
        {
          "disableUnderline": disableUnderline |> Utils.unwrapBool,
          "disabled": disabled |> Utils.unwrapBool,
          "error": error |> Utils.unwrapBool,
          "fullWidth": fullWidth |> Utils.unwrapBool,
          "autoFocus": autoFocus |> Utils.unwrapBool,
          "style": from_opt style,
          "placeholder": from_opt placeholder,
          "className": from_opt className,
          "type": from_opt inputType,
          "value": from_opt value,
          "onChange": from_opt onChange
        }
      )
    children;
