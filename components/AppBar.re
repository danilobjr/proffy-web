open Icon;

[@react.component]
let make = (~onBackClick={_ => ()}, ~children) =>
  <div className="app-bar">
    <Icon name=Back onClick=onBackClick />
    children
  </div>;
