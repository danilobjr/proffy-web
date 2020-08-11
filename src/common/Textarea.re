open Utils;

requireCSS("../styles/common/textarea.css");

[@react.component]
let make = (~label, ~name, ~rows=3, ~value, ~onChange) =>
  <div className="textarea">
    <label htmlFor=name>label -> React.string</label>
    <textarea id=name rows value onChange />
  </div>;
