[@bs.module "material-ui"] external dialog : ReasonReact.reactClass = "Dialog";

type dialogClasses = {
  root: option(string),
  paper: option(string),
  paperWidthXs: option(string),
  paperWidthSm: option(string),
  paperWidthMd: option(string),
  fullScreen: option(string)
};

let make =
    (
      ~classes: option(dialogClasses)=?,
      ~enterTransitionDuration: option(int)=?,
      ~leaveTransitionDuration: option(int)=?,
      ~fullScreen: option(bool)=?,
      ~ignoreBackdropClick: option(bool)=?,
      ~ignoreEscapeKeyUp: option(bool)=?,
      ~style: option(ReactDOMRe.style)=?,
      ~onBackdropClick: option((unit => unit))=?,
      ~onEnter: option((unit => unit))=?,
      ~onEntered: option((unit => unit))=?,
      ~onEntering: option((unit => unit))=?,
      ~onEscapeKeyUp: option((unit => unit))=?,
      ~onExit: option((unit => unit))=?,
      ~onExited: option((unit => unit))=?,
      ~onExiting: option((unit => unit))=?,
      ~onRequestClose: option((unit => unit))=?,
      ~openDialog: option(bool)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dialog,
    ~props=
      Js.Undefined.(
        {
          "style": from_opt(style),
          "classes": from_opt(classes),
          "fullScreen": from_opt(fullScreen),
          "leaveTransitionDuration": from_opt(leaveTransitionDuration),
          "enterTransitionDuration": from_opt(enterTransitionDuration),
          "ignoreEscapeKeyUp": from_opt(ignoreEscapeKeyUp),
          "ignoreBackdropClick": from_opt(ignoreBackdropClick),
          "onBackdropClick": from_opt(onBackdropClick),
          "onEnter": from_opt(onEnter),
          "onEntered": from_opt(onEntered),
          "onEntering": from_opt(onEntering),
          "onEscapeKeyUp": from_opt(onEscapeKeyUp),
          "onExit": from_opt(onExit),
          "onExited": from_opt(onExited),
          "onExiting": from_opt(onExiting),
          "onRequestClose": from_opt(onRequestClose),
          "open": from_opt(openDialog)
        }
      ),
    children
  );
