open Utils;

type image =
  | Landing
  | Logo
  | Background;

[@react.component]
let make = (~className="", ~name, ~alt="") => {
  let fileName =
    switch (name) {
    | Landing => "landing"
    | Logo => "logo"
    | Background => "background"
    };

  let src = requireImage("../images/" ++ fileName ++ ".svg");

  <img className src alt />;
};
