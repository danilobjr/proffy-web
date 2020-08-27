open Box;
open Classnames;

type refType = React.ref(Js.nullable(Dom.htmlInputElement));

module InputText = {
  [@react.component]
  let make = (~className="", ~boxed=false, ~label, ~name, ~value="", ~onChange={_ => ()}) => {
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
      "-interactive"->on(interactive),
      className
    ]);

    let handleInputBlur = _ => setFocused(_ => false);
    let handleInputFocus = _ => setFocused(_ => true);

    <Flex
      className
      direction=FlexDirection.Column
    >
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
    </Flex>;
  };
};

module InputPassword = {
  [@react.component]
  let make = (~className="", ~boxed=false, ~label, ~name, ~value="", ~onChange={_ => ()}) => {
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
      "-interactive"->on(interactive),
      className
    ]);

    let handleInputBlur = _ => setFocused(_ => false);
    let handleInputFocus = _ => setFocused(_ => true);

    <Flex
      className
      direction=FlexDirection.Column
    >
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
    </Flex>;
  };
};

module Checkbox = {
  [@react.component]
  let make = (~className="", ~label, ~name, ~checked=false, ~onChange={_ => ()}) => {
    let className = append([
      "form-field -checkbox",
      "-checked"->on(checked),
      className
    ]);

    let handleClick = _ => {
      onChange(!checked);
    };

    <Flex
      className
      direction=FlexDirection.Row
      alignItems=AlignItems.Center
      onClick=handleClick
    >
      <input
        name
        type_="checkbox"
        defaultChecked=checked
      />

      <label>
        <Text type_=Label>label</Text>
      </label>

      <Icon name=Check />
    </Flex>;
  };
};
