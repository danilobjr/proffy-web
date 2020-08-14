open Classnames;

[@react.component]
let make = (~className="", ~children) => {
  let classes = append(["page-box", className]);

  <div className=classes>children</div>;
};
