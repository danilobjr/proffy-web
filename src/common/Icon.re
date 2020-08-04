open Utils;

type image =
  | Back
  | Check
  | Heart
  | Study
  | Teach
  | Whatsapp;

[@react.component]
let make = (~className="", ~name, ~alt="") => {
  let fileName =
    switch (name) {
    | Back => "back"
    | Check => "check"
    | Heart => "heart"
    | Study => "study"
    | Teach => "teach"
    | Whatsapp => "whatsapp"
    };

  let src = requireImage("../icons/" ++ fileName ++ ".svg");

  <img className src alt />;
};
