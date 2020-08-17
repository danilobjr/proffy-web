open Classnames;

// TODO move this to a PageContent module inside Page.re
[@react.component]
let make = (~className="", ~children) => {
  let classes = append(["page-content", className]);

  <div className=classes>children</div>;
};
