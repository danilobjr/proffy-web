open Classnames;

[@react.component]
let make = (~className="", ~amount=1, ~currentIndex=0) => {
  let classes = append(["page-indicator", className]);

  let indicators = amount
    -> Array.make ("anything")
    -> Array.mapi ((index, _) => {
      switch (index === currentIndex) {
      | true => <Icon key=string_of_int(index) name=PageIndicatorHighlight />
      | false => <Icon key=string_of_int(index) name=PageIndicator />
      };
    }, _)
    -> React.array;

  <div className=classes>indicators</div>;
};
