open ReasonReactRouter;

[@react.component]
let make = () => {
  let url = useUrl();

  switch (url.path) {
  | [] => <Landing />
  | _ => "Not found" |> React.string
  };
};
