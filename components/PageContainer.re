open Classnames;

[@react.component]
let make = (~className="", ~children) => {
  let classes = append(["page-container", className]);

  <div className=classes>children</div>;
};
