open ReasonReactRouter;

[@react.component]
let make = () => {
  let url = useUrl();

  switch (url.path) {
  | [] => <Landing />
  | ["teach"] => <TeacherForm />
  | ["learn"] => <TeacherList />
  | _ => "Not found" |> React.string
  };
};
