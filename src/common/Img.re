open Utils;

type image =
  | Landing
  | Logo;

[@react.component]
let make = (~className="", ~name, ~alt="") => {
  let fileName =
    switch (name) {
    | Landing => "landing"
    | Logo => "logo"
    };

  let src = requireImage("../images/" ++ fileName ++ ".svg");

  <img className src alt />;
};
