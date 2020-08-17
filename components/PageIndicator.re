open Icon;

[@react.component]
let make = (~amount=1, ~currentIndex=0) => {
  let indicators = amount
    -> Array.make ("anything")
    -> Array.mapi ((index, _) => {
      switch (index === currentIndex) {
      | true => <Icon key=string_of_int(index) name=PageIndicatorHighlight />
      | false => <Icon key=string_of_int(index) name=PageIndicator />
      };
    }, _)
    -> React.array;

  <div className="page-indicator">indicators</div>;
};
