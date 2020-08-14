open React;
open Icon;
open Classnames;

module InputText = {
  [@react.component]
  let make = (~name, ~label, ~boxed=false) => {
    let className = append(["form-field", "-boxed"->on(boxed)]);

    <div className>
      <label htmlFor=name>label -> string</label>
      <input id=name type_="text" />
    </div>;
  };
};

module InputPassword = {
  [@react.component]
  let make = (~name, ~label, ~boxed=false) => {
    let className = append(["form-field -password", "-boxed"->on(boxed)]);

    <div className>
      <label htmlFor=name>label -> string</label>
      <input id=name type_="password" />
      <Icon name=SeePassword />
    </div>;
  };
};

module Checkbox = {
  [@react.component]
  let make = (~name, ~label) => {
    <div className="form-field -checkbox">
      <input id=name type_="checkbox" />
      <label htmlFor=name>label -> string</label>
    </div>;
  };
};
