open Classnames;

[@react.component]
let make = (~children) => <div className="tab-container">children</div>;

module Tab = {
  [@react.component]
  let make = (~className="", ~focused=false, ~onClick=?, ~children) => {
    let classes = append([
      "tab",
      "-focused" -> on(focused),
      className,
    ]);

    <div className=classes ?onClick>children</div>;
  };
};
