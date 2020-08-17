open React;
open Classnames;

type type_ =
  | Button
  | Label
  | Link
  | Slogan
  | Text
  | Title
  | TitleBigger;

[@react.component]
let make = (~className="", ~type_=Text, ~children) => {
  let typeClass = switch type_ {
  | Button => "-button"
  | Label => "-label"
  | Link => "-link"
  | Slogan => "-slogan"
  | Text => "-text"
  | Title => "-title"
  | TitleBigger => "-title-bigger"
  };

  let classes = append(["typography", typeClass, className]);

  <span className=classes>children -> string</span>;
};
