open Classnames;
open Text;

type buttonType =
  | Default
  | Disabled
  | Primary;

// TODO use ~type_ as used in LinkButton .. see if this apply to other components like Text and FormField
[@react.component]
let make = (~className="", ~type_=Default, ~onClick={_ => ()}, ~children) => {
  let typeClass =
    switch type_ {
    | Default => ""
    | Disabled => "-disabled"
    | Primary => "-primary"
    };

  let classNames = append([
    "button-box",
    typeClass,
    className,
  ]);

  <button className=classNames onClick>
    <Text type_=Button>children</Text>
  </button>;
};
