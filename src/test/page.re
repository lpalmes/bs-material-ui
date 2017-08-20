type state = {
  expanded: bool,
  items: list int
};

let addItem _e {ReasonReact.state: state} =>
  ReasonReact.Update {...state, items: [List.hd state.items + 1, ...state.items]};

let component = ReasonReact.statefulComponent "Greeting";

let make ::name _ => {
  ...component,
  initialState: fun () => {expanded: false, items: [1]},
  render: fun {state, update} =>
    <div>
      <AppBar>
        <Toolbar>
          <Typography style=(ReactDOMRe.Style.make color::"white" ()) textType="title">
            (ReasonReact.stringToElement name)
          </Typography>
          <div style=(ReactDOMRe.Style.make flex::"1" ()) />
          <Button onClick=(update addItem)> (ReasonReact.stringToElement "Add Item") </Button>
        </Toolbar>
      </AppBar>
      <div style=(ReactDOMRe.Style.make paddingTop::"64px" ())>
        (
          ReasonReact.arrayToElement (
            Array.of_list (
              List.map
                (
                  fun item =>
                    <Paper
                      key=(string_of_int item)
                      style=(ReactDOMRe.Style.make padding::"8px" marginTop::"16px" ())>
                      <Typography>
                        (ReasonReact.stringToElement ("Element number " ^ string_of_int item))
                      </Typography>
                    </Paper>
                )
                state.items
            )
          )
        )
        <Button raised=true onClick=(update addItem)>
          (ReasonReact.stringToElement "Click me to add Item")
        </Button>
      </div>
    </div>
};
