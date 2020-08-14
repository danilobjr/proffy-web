open Classnames;
open Icon;
open Text;

module InputText = {
  [@react.component]
  let make = (~name, ~label, ~boxed=false) => {
    let className = append(["form-field", "-boxed"->on(boxed)]);

    <div className>
      <label htmlFor=name>
        <Text type_=Label>label</Text>
      </label>
      <input id=name type_="text" />
    </div>;
  };
};

module InputPassword = {
  [@react.component]
  let make = (~name, ~label, ~boxed=false) => {
    let className = append(["form-field -password", "-boxed"->on(boxed)]);

    <div className>
      <label htmlFor=name>
        <Text type_=Label>label</Text>
      </label>
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
      <label htmlFor=name>
        <Text type_=Label>label</Text>
      </label>
    </div>;
  };
};
