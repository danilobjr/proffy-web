[@react.component]
let make = (~noBackButton=false, ~onBackClick={_ => ()}, ~children=React.null) => {
  let backButton =
    switch noBackButton {
    | true => React.null
    | false => <Icon name=Back onClick=onBackClick />
    };

  <div className="app-bar">
    backButton
    children
  </div>;
};
