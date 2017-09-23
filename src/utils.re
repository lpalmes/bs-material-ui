let unwrapBool opt =>
  switch opt {
  | Some b => b |> Js.Boolean.to_js_boolean |> Js.Undefined.return
  | None => Js.Undefined.empty
  };

let option_map fn opt_value =>
  switch opt_value {
  | None => None
  | Some value => Some (fn value)
  };
