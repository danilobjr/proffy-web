open Utils;

requireCSS("../styles/input.css");

[@react.component]
let make = (~label, ~name, ~value, ~onChange) => {
  <div className="input-block">
    <label htmlFor=name>label -> React.string</label>
    <input type_="text" id=name value onChange />
  </div>
}
