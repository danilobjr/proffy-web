open React;
open Classnames;

type textType =
  | Button
  | Label
  | Link
  | Slogan
  | Text
  | Title
  | TitleBigger;

[@react.component]
let make = (~className="", ~onPurpleBg=false, ~type_: textType=Text, ~children) => {
  let typeClass =
    switch type_ {
    | Button => "-button"
    | Label => "-label"
    | Link => "-link"
    | Slogan => "-slogan"
    | Text => "-text"
    | Title => "-title"
    | TitleBigger => "-title-bigger"
    };

  let variantClassOnPurpleBg =
    switch onPurpleBg {
    | true => "-on-purple"
    | false => ""
    };

  let classes = append(["typography", className, typeClass, variantClassOnPurpleBg]);

  <span className=classes>children -> string</span>;
};
