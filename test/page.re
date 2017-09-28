type state = {
  checked: bool,
  expanded: bool,
  items: list int,
  openDialog: bool
};

Js.log (Theme.getColor Theme.teal 50);

let openDialog _ {ReasonReact.state: state} => ReasonReact.Update {...state, openDialog: true};

let closeDialog _ {ReasonReact.state: state} => ReasonReact.Update {...state, openDialog: false};

let checkBox checked {ReasonReact.state: state} => ReasonReact.Update {...state, checked};

let component = ReasonReact.statefulComponent "Greeting";

let make ::name _ => {
  ...component,
  initialState: fun () => {checked: false, expanded: false, items: [1], openDialog: false},
  render: fun {state, update} =>
    <div>
      <AppBar>
        <Toolbar>
          <Typography style=(ReactDOMRe.Style.make color::"white" ()) textType="title">
            (ReasonReact.stringToElement name)
          </Typography>
          <div style=(ReactDOMRe.Style.make flex::"1" ()) />
          <Button> (ReasonReact.stringToElement "Add Item") </Button>
        </Toolbar>
      </AppBar>
      <div style=(ReactDOMRe.Style.make paddingTop::"64px" ())>
        <Dialog openDialog=state.openDialog onRequestClose=(update closeDialog)>
          <DialogTitle> (ReasonReact.stringToElement "Welcome to the dialog") </DialogTitle>
          <DialogContent>
            <DialogContentText>
              (ReasonReact.stringToElement "Thanks for opening this awesome dialog")
            </DialogContentText>
          </DialogContent>
          <DialogActions>
            <Button onClick=(update closeDialog)> (ReasonReact.stringToElement "Close") </Button>
          </DialogActions>
        </Dialog>
        <Button raised=true onClick=(update openDialog)>
          (ReasonReact.stringToElement "Click me to open dialog")
        </Button>
        <Avatar alt="a kitten" component="div" src="./kitten.jpg" />
        (ReasonReact.stringToElement "Fixed checkbox")
        <Checkbox checked=true />
        (ReasonReact.stringToElement "Dead checkbox")
        <Checkbox checked=false disabled=true disableRipple=true disabledClassName="dead" />
        (ReasonReact.stringToElement "Live checkbox")
        <Checkbox onChange=(update checkBox) name="mah checkbox" />
        (ReasonReact.stringToElement "Custom icons")
        <Checkbox
          checkedIcon=(ReasonReact.stringToElement "CH-CH-CHECKED")
          icon=(ReasonReact.stringToElement "CHECKIT")
        />
      </div>
    </div>
};
