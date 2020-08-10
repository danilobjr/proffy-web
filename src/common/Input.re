open Utils;

requireCSS("../styles/common/input.css");

[@react.component]
let make = (~label, ~name, ~type_="text", ~value, ~onChange) =>
  <div className="input">
    <label htmlFor=name>label -> React.string</label>
    <input type_ id=name value onChange />
  </div>;

