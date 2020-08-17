open Classnames;
open Text;

type buttonType =
  | Default
  | Disabled
  | Primary;

[@react.component]
let make = (~type_=Default, ~children) => {
  let typeClass =
    switch type_ {
    | Default => ""
    | Disabled => "-disabled"
    | Primary => "-primary"
    };

  let classNames = append([
    "button-box",
    typeClass
  ]);

  <button className=classNames>
    <Text type_=Button>children</Text>
  </button>;
};
