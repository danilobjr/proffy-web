open Utils;

requireCSS("../styles/select.css");

type option = {
  label: string,
  value: string,
};

[@react.component]
let make = (~label, ~name, ~options, ~value, ~onChange) => {
  let options' =
    options
    |> Array.map (o => {
      <option key=o.value value=o.value>
        o.label -> React.string
      </option>
    });

  <div className="select-block">
    <label htmlFor=name>label -> React.string</label>
    <select value id=name onChange>
      <option
        value=""
        disabled=true
        hidden=true
        selected=true
      >
        "Select an option" -> React.string
      </option>

      {React.array(options')}
    </select>
  </div>
};

