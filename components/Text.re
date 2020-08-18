open React;
open Classnames;

// TODO remove slogan type and use text one. Do adjusts if necessary in css

type textType =
  | Button
  | Label
  | Link
  | Slogan
  | Text
  | TextBigger
  | Title
  | TitleBigger;

[@react.component]
let make = (~className="", ~bold=false, ~purpleBg=false, ~type_: textType=Text, ~children) => {
  let typeClass =
    switch type_ {
    | Button => "-button"
    | Label => "-label"
    | Link => "-link"
    | Slogan => "-slogan"
    | Text => "-text"
    | TextBigger => "-text -bigger"
    | Title => "-title"
    | TitleBigger => "-title -bigger"
    };

  let boldClass =
    switch bold {
    | true => "_bold"
    | false => ""
    }

  let variantClassOnPurpleBg =
    switch purpleBg {
    | true => "-on-purple"
    | false => ""
    };

  let classes = append(["typography", typeClass, boldClass, variantClassOnPurpleBg, className]);

  <span className=classes>children -> string</span>;
};
