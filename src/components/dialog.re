external dialog : ReasonReact.reactClass = "Dialog" [@@bs.module "material-ui"];

type dialogClasses = {
  root: option string,
  paper: option string,
  paperWidthXs: option string,
  paperWidthSm: option string,
  paperWidthMd: option string,
  fullScreen: option string
};

let make
    classes::(classes: option dialogClasses)=?
    enterTransitionDuration::(enterTransitionDuration: option int)=?
    leaveTransitionDuration::(leaveTransitionDuration: option int)=?
    fullScreen::(fullScreen: option bool)=?
    ignoreBackdropClick::(ignoreBackdropClick: option bool)=?
    ignoreEscapeKeyUp::(ignoreEscapeKeyUp: option bool)=?
    style::(style: option ReactDOMRe.style)=?
    onBackdropClick::(onBackdropClick: option (unit => unit))=?
    onEnter::(onEnter: option (unit => unit))=?
    onEntered::(onEntered: option (unit => unit))=?
    onEntering::(onEntering: option (unit => unit))=?
    onEscapeKeyUp::(onEscapeKeyUp: option (unit => unit))=?
    onExit::(onExit: option (unit => unit))=?
    onExited::(onExited: option (unit => unit))=?
    onExiting::(onExiting: option (unit => unit))=?
    onRequestClose::(onRequestClose: option (unit => unit))=?
    openDialog::(openDialog: option bool)=?
    children =>
  ReasonReact.wrapJsForReason
    reactClass::dialog
    props::
      Js.Undefined.(
        {
          "style": from_opt style,
          "classes": from_opt classes,
          "fullScreen": from_opt fullScreen,
          "leaveTransitionDuration": from_opt leaveTransitionDuration,
          "enterTransitionDuration": from_opt enterTransitionDuration,
          "ignoreEscapeKeyUp": from_opt ignoreEscapeKeyUp,
          "ignoreBackdropClick": from_opt ignoreBackdropClick,
          "onBackdropClick": from_opt onBackdropClick,
          "onEnter": from_opt onEnter,
          "onEntered": from_opt onEntered,
          "onEntering": from_opt onEntering,
          "onEscapeKeyUp": from_opt onEscapeKeyUp,
          "onExit": from_opt onExit,
          "onExited": from_opt onExited,
          "onExiting": from_opt onExiting,
          "onRequestClose": from_opt onRequestClose,
          "open": from_opt openDialog
        }
      )
    children;
