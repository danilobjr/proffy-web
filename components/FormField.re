open Classnames;
open Icon;
open Text;

type refType = React.ref(Js.nullable(Dom.htmlInputElement));

module InputText = {
  [@react.component]
  let make = (~boxed=false, ~label, ~name, ~value="", ~onChange={_ => ()}) => {
    let valuePropIsEmpty = value
      -> String.trim
      -> String.length
      -> (===) (0);

    let (focused, setFocused) = React.useState(() => false);

    let interactive =
      !valuePropIsEmpty ||
      (valuePropIsEmpty && focused);

    let className = append([
      "form-field",
      "-boxed"->on(boxed),
      "-focused"->on(focused),
      "-interactive"->on(interactive)
    ]);

    let handleInputBlur = _ => setFocused(_ => false);
    let handleInputFocus = _ => setFocused(_ => true);

    <div className>
      <label className="-animated" htmlFor=name>
        <Text type_=Label>label</Text>
      </label>

      <input
        id=name
        name
        type_="text"
        value
        onBlur={handleInputBlur}
        onChange
        onFocus={handleInputFocus}
      />
    </div>;
  };
};

module InputPassword = {
  [@react.component]
  let make = (~boxed=false, ~label, ~name, ~value="", ~onChange={_ => ()}) => {
    let valuePropIsEmpty = value
      -> String.trim
      -> String.length
      -> (==) (0);

    let (focused, setFocused) = React.useState(() => false);

    let interactive =
      !valuePropIsEmpty ||
      (valuePropIsEmpty && focused);

    let className = append([
      "form-field -password",
      "-boxed"->on(boxed),
      "-focused"->on(focused),
      "-interactive"->on(interactive)
    ]);

    let handleInputBlur = _ => setFocused(_ => false);
    let handleInputFocus = _ => setFocused(_ => true);

    <div className>
      <label className="-animated" htmlFor=name>
        <Text type_=Label>label</Text>
      </label>

      <input
        id=name
        name
        type_="password"
        value
        onBlur={handleInputBlur}
        onChange
        onFocus={handleInputFocus}
      />

      <Icon name=SeePassword />
    </div>;
  };
};

module Checkbox = {
  [@react.component]
  let make = (~label, ~name, ~checked=false, ~onChange={_ => ()}) => {
    let className = append([
      "form-field -checkbox",
      "-checked"->on(checked),
    ]);

    let handleDivClick = _ => {
      onChange(!checked);
    };

    <div className onClick=handleDivClick>
      <input
        name
        type_="checkbox"
        defaultChecked=checked
      />

      <label>
        <Text type_=Label>label</Text>
      </label>

      <Icon name=Check />
    </div>;
  };
};
