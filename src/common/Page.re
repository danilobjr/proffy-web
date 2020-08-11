open Utils;

requireCSS("../styles/common/page.css");

[@react.component]
let make = (~className="", ~children) => {
  let classNames = "page" ++ " " ++ className;

  <div className=classNames>children</div>
};
