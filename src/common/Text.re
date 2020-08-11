type type_ =
  | Anchor
  | Slogan
  | Title;

[@react.component]
let make = (~type_, ~children) => {
  let classesForType = switch type_ {
  | Anchor => " anchor"
  | Slogan => " slogan"
  | Title => " title"
  };

  let className = "text" ++ classesForType;

  <span className>children</span>;
};
