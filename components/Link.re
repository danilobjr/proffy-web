open Classnames;
open Text;

[@react.component]
let make = (~className="", ~href, ~children) => {
  let classes = append(["link-text", className]);

  <Next.Link href>
    <a className=classes>
      <Text type_=Link>children</Text>
    </a>
  </Next.Link>;
};
