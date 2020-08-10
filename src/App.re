open Utils

requireCSS("./styles/global.css")

[@react.component]
let make = () => {
  let route = Router.useRoute();

  switch (route) {
  | Some(Home) => <LandingPage />
  | Some(Learn) => <TeacherList />
  | Some(Teach) => <TeacherForm />
  | None => "Page Not Found" |> React.string
  };
}
