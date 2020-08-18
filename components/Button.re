open Classnames;

type buttonType =
  | Default
  | Disabled
  | Primary;

// TODO use ~type_ as used in LinkButton .. see if this apply to other components like Text and FormField
[@react.component]
let make = (
  ~className="",
  ~icon: option(Icon.iconName)=?,
  ~type_: buttonType=Default,
  ~onClick={_ => ()},
  ~children="") => {
  let typeClass =
    switch type_ {
    | Default => ""
    | Disabled => "-disabled"
    | Primary => "-primary"
    };

  let classNames = append([
    "button-box",
    typeClass,
    className,
  ]);

  let icon =
    switch icon {
    | Some(iconName) => <Icon name=iconName />
    | None => React.null
    };

  let text =
    switch children {
    | s when String.length(s) > 0 => <Text type_=Button>s</Text>
    | _ => React.null
    };

  <button className=classNames onClick>
    icon
    text
  </button>;
};
