open Box;
open Classnames;

[@react.component]
let make = (~className="", ~children) => {
  let classes = append(["page-container", className]);

  <Flex className=classes direction=FlexDirection.Column>children</Flex>;
};
