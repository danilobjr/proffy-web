open ReasonReactRouter;

[@react.component]
let make = () => {
  let url = useUrl();

  switch (url.path) {
  | [] => <Landing />
  | ["study"] => <TeacherList />
  | _ => "Not found" |> React.string
  };
};
