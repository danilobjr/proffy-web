open Classnames;

[@react.component]
let make = (~className="", ~children) => {
  let classes = append(["page-content", className]);

  <div className=classes>children</div>;
};
