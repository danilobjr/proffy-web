open Utils;

requireCSS("../styles/common/container.css");

type breakpoint =
  | Small
  | Medium
  | Large
  | Fluid
  | None;

[@react.component]
let make = (~breakpoint: breakpoint=None, ~children) => {
  let className =
    switch breakpoint {
    | Small => "-sm"
    | Medium => "-md"
    | Large => "-lg"
    | Fluid => "-fluid"
    | None => ""
    };

  let className = "container" ++ " " ++ className;

  <div className>children</div>
};
