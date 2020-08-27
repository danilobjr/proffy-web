// TODO remove these aliases and use Box modules only
module AlignItems = Box.AlignItems;
module Direction = Box.FlexDirection;
module JustifyContent = Box.JustifyContent;
module Spacing = Box.Spacing;

[@react.component]
let make = (
  ~className="",
  ~alignItems=AlignItems.Stretch,
  ~direction=Direction.Row,
  ~grow=false,
  ~justifyContent=JustifyContent.Start,
  ~padding=Spacing.Unset,
  ~paddingTop=Spacing.Unset,
  ~paddingBottom=Spacing.Unset,
  ~paddingX=Spacing.Unset,
  ~paddingY=Spacing.Unset,
  ~onClick=?,
  ~style=?,
  ~children) => {

  let flexDirection =
    switch direction {
    | Column => Box.FlexDirection.Column
    | Row => Box.FlexDirection.Row
    | Unset => Box.FlexDirection.Row
    };

  <Box
    className
    alignItems
    flex=true
    flexDirection
    grow
    justifyContent
    padding
    paddingTop
    paddingBottom
    paddingX
    paddingY
    ?style
    ?onClick
  >
    children
  </Box>;
};
