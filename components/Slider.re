module View = {
  [@react.component]
  let make = (~children) => {
    <div className="view">children</div>;
  };
};

// TODO revisit f# for fun and profit
module SlideIndex = {
  type t =
    | Index(int);

  let make = (index, max) => {
    switch index {
    | i when i < 0 => Index(0)
    | i when i > max => Index(0)
    | i => Index(i)
    };
  };

  let multiply = (index, n) => {
    switch index {
    | Index(i) => i * n
    };
  }
}

[@react.component]
let make = (~index=0, ~children) => {
  let childrenCount = React.Children.count(children);
  let maxIndex = childrenCount - 1;

  let index = index
    -> SlideIndex.make (maxIndex)
    -> SlideIndex.multiply (100);

  let style = ReactDOM.Style.make(~transform="translate(-" ++ string_of_int(index) ++ "%, 0px)", ());

  <div className="slider-container">
    <div className="slider" style>
      children
    </div>
  </div>;
};
