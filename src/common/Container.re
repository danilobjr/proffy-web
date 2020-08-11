open Utils;

requireCSS("../styles/common/container.css");

type breakpoint =
  | Small
  | Medium
  | Large
  | Fluid
  | None;

[@react.component]
let make = (~className="", ~breakpoint: breakpoint=None, ~children) => {
  let breakpointClass =
    switch breakpoint {
    | Small => " -sm"
    | Medium => " -md"
    | Large => " -lg"
    | Fluid => " -fluid"
    | None => ""
    };

  let customClassName =
    switch className {
    | "" => ""
    | name => " " ++ name
    };

  let className = "container" ++ breakpointClass ++ customClassName;

  <div className>children</div>
};
