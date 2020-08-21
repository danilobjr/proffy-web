open Classnames;

type spacing =
  | Xs
  | Sm
  | Md
  | Lg
  | Xl
  | None;

[@react.component]
let make = (~className="", ~padding=Sm, ~children) => {
  let paddingClasses =
    switch padding {
    | Xs => "-padding-xs"
    | Sm => "-padding-sm"
    | Md => "-padding-md"
    | Lg => "-padding-lg"
    | Xl => "-padding-xl"
    | None => ""
    };

  let classes = append(["box", paddingClasses, className]);

  <div className=classes>children</div>;
};
