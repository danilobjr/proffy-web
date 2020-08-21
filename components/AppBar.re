open Classnames;

[@react.component]
let make = (~light=false, ~noBackButton=false, ~title="", ~onBackClick={_ => ()}, ~children=React.null) => {
  let lightPalette =
    switch light {
    | true => "-light"
    | false => ""
    };

  let classes = append(["app-bar", lightPalette]);

  let backButton =
    switch noBackButton {
    | true => React.null
    | false => <Icon className="leftcolumn" name=Back onClick=onBackClick />
    };

  let titleComponent =
    switch title {
    | "" => React.null
    | _ => <Text>title</Text>
    };

  <div className=classes>
    backButton
    titleComponent
    children
  </div>;
};
