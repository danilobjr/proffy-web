open Classnames;

[@react.component]
let make = (~className="", ~children) => {
  let classes = append(["page", className]);

  <div className=classes>children</div>
};
