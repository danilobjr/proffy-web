open Utils;

requireCSS("../styles/textarea.css");

[@react.component]
let make = (~label, ~name, ~value, ~onChange) =>
  <div className="textarea-block">
    <label htmlFor=name>label -> React.string</label>
    <textarea id=name value onChange />
  </div>;
