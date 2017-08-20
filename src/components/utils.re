let unwrapBool opt =>
  switch opt {
  | Some b => b |> Js.Boolean.to_js_boolean |> Js.Undefined.return
  | None => Js.Undefined.empty
  };
