open Utils;

type image =
  | Check
  | Heart
  | Study
  | Teach;

[@react.component]
let make = (~className="", ~name, ~alt="") => {
  let fileName =
    switch (name) {
    | Check => "check"
    | Heart => "heart"
    | Study => "study"
    | Teach => "teach"
    };

  let src = requireImage("../icons/" ++ fileName ++ ".svg");

  <img className src alt />;
};
