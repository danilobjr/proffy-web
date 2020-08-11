open Utils;

type image =
  | Back
  | Check
  | Heart
  | Smile
  | Study
  | Teach
  | Warning
  | Whatsapp;

[@react.component]
let make = (~className="", ~name, ~alt="") => {
  let fileName =
    switch (name) {
    | Back => "back"
    | Check => "check"
    | Heart => "heart"
    | Smile => "smile"
    | Study => "study"
    | Teach => "teach"
    | Warning => "warning"
    | Whatsapp => "whatsapp"
    };

  let className = "icon" ++ className;
  let src = requireImage("../icons/" ++ fileName ++ ".svg");

  <img className src alt />;
};
