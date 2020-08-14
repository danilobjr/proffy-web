open Classnames;

[@react.component]
let make = (~className="", ~href, ~children) => {
  let classes = append(["link", className]);

  <Next.Link href>
    <a className=classes>children</a>
  </Next.Link>;
};
