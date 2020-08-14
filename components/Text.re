open React;
open Classnames;

type type_ =
  | Button
  | Label
  | Link
  | LinkUnsaturated
  | Slogan
  | Title;

[@react.component]
let make = (~className="", ~type_, ~children) => {
  let typeClass = switch type_ {
  | Button => "-button"
  | Label => "-label"
  | Link => "-link"
  | LinkUnsaturated => "-link -unsaturated"
  | Slogan => "-slogan"
  | Title => "-title"
  };

  let classes = append(["typography-text", typeClass, className]);

  <span className=classes>children -> string</span>;
};
