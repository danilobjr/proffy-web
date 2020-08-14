open Classnames;
open Text;

[@react.component]
let make = (~className="", ~href, ~unsaturatedColor=false, ~children) => {
  let classes = append(["link-text", className]);

  let type_ =
    switch unsaturatedColor {
    | true => LinkUnsaturated
    | false => Link
    };

  <Next.Link href>
    <a className=classes>
      <Text type_>children</Text>
    </a>
  </Next.Link>;
};
