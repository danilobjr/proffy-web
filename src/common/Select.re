open Utils;

requireCSS("../styles/common/select.css");

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

  <div className="select">
    <label htmlFor=name>label -> React.string</label>
    <select id=name value onChange>
      <option
        default=true
        disabled=true
        hidden=true
        value=""
      >
        "Select an option" -> React.string
      </option>

      {React.array(options')}
    </select>
  </div>
};

