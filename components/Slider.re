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
    | i when i > max => Index(max)
    | i => Index(i)
    };
  };
}

let multiplyIndexBy100 = (index) => {
  switch index {
  | SlideIndex.Index(i) => i * 100
  };
};

[@react.component]
let make = (~index=0, ~children) => {
  let childrenCount = React.Children.count(children);
  let maxIndex = childrenCount - 1;

  let translate = index
    -> SlideIndex.make (maxIndex)
    -> multiplyIndexBy100
    -> string_of_int
    -> (translate => "translate(-" ++ translate ++ "%, 0px)");

  let style = ReactDOM.Style.make(~transform=translate, ());

  <div className="slider-container">
    <Flex className="slider" style>
      children
    </Flex>
  </div>;
};
