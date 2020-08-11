open Icon;
open Utils;

requireCSS("../styles/common/button.css");

[@react.component]
let make = (~text="", ~icon: option(image)=?, ~onClick={_ => ()}) => {
  let icon =
    switch icon {
    | Some(name) => <Icon name alt="button icon" />
    | None => React.null
    };

  <button className="button" type_="button" onClick>
    icon
    text -> React.string
  </button>
};
