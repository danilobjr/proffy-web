open Utils

requireCSS("./styles/global.css");

[@react.component]
let make = () => {
  let route = Router.useRoute();

  switch (route) {
  | Some(Home) => <Landing />
  | Some(Learn) => <TeacherList />
  | Some(Login) => <Login />
  | Some(Teach) => <TeacherForm />
  | None => "Page Not Found" |> React.string
  };
}
