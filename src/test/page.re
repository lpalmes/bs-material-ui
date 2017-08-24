type state = {
  checked: bool,
  expanded: bool,
  items: list int
};

let addItem _e {ReasonReact.state: state} =>
  ReasonReact.Update {...state, items: [List.hd state.items + 1, ...state.items]};

let checkBox checked {ReasonReact.state: state} =>
  ReasonReact.Update {...state, checked };

let component = ReasonReact.statefulComponent "Greeting";

let make ::name _ => {
  ...component,
  initialState: fun () => {checked: false, expanded: false, items: [1]},
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
        <Avatar
        alt="a kitten"
        component="div"
        src="./kitten.jpg"
        />
        (ReasonReact.stringToElement "Fixed checkbox")
        <Checkbox
          checked=true/>
        (ReasonReact.stringToElement "Dead checkbox")
        <Checkbox
          checked=false
          disabled=true
          disableRipple=true
          disabledClassName=("dead")/>
        (ReasonReact.stringToElement "Live checkbox")
        <Checkbox
          onChange=(update checkBox)
          name=("mah checkbox")
        />
        (ReasonReact.stringToElement "Custom icons")
          <Checkbox
          checkedIcon=(
            ReasonReact.stringToElement "CH-CH-CHECKED"
          )
          icon=(ReasonReact.stringToElement "CHECKIT")
          />
      </div>
    </div>
};
