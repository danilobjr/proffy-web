open Icon;

[@react.component]
let make = (~onBackClick={_ => ()}, ~children=React.null) =>
  <div className="app-bar">
    <Icon name=Back onClick=onBackClick />
    children
  </div>;
