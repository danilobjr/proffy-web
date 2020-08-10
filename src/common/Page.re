open Utils;

requireCSS("../styles/common/page.css");

[@react.component]
let make = (~id, ~children) => {
  <div className="page" id>children</div>
};
