open Classnames;

module AlignItems = {
  type t =
    | Start
    | Center
    | End
    | Stretch
    | Unset;
};

module FlexDirection = {
  type t =
    | Column
    | Row
    | Unset;
};

module JustifyContent = {
  type t =
    | Start
    | Center
    | End
    | SpaceBetween
    | Unset;
};

module Spacing = {
  type t =
    | Xs
    | Sm
    | Md
    | Lg
    | Xl
    | Xl2
    | Xl3
    | Xl4
    | Unset;
};

module Utils = {
  let mapAlignItemsToClassname = alignItems =>
    switch alignItems {
    | AlignItems.Start =>   "-flex-align-items-start"
    | AlignItems.Center => "-flex-align-items-center"
    | AlignItems.End =>  "-flex-align-items-end"
    | AlignItems.Stretch =>  "-flex-align-items-stretch"
    | AlignItems.Unset =>  ""
    };

  let mapFlexDirectionToClassname = direction =>
    switch direction {
    | FlexDirection.Column => "-flex-direction-column"
    | FlexDirection.Row => "-flex-direction-row"
    | FlexDirection.Unset => ""
    };

  let mapJustifyContentToClassname = justifyContent =>
    switch justifyContent {
    | JustifyContent.Start =>        "-flex-justify-content-start"
    | JustifyContent.Center =>       "-flex-justify-content-center"
    | JustifyContent.End =>          "-flex-justify-content-end"
    | JustifyContent.SpaceBetween => "-flex-justify-content-spacebetween"
    | JustifyContent.Unset =>  ""
    };

  let mapPaddingToClassname = padding =>
    switch padding {
    | Spacing.Xs => "-padding-xs"
    | Spacing.Sm => "-padding-sm"
    | Spacing.Md => "-padding-md"
    | Spacing.Lg => "-padding-lg"
    | Spacing.Xl => "-padding-xl"
    | Spacing.Xl2 => "-padding-xl2"
    | Spacing.Xl3 => "-padding-xl3"
    | Spacing.Xl4 => "-padding-xl4"
    | Spacing.Unset => ""
    };

  let mapPaddingTopToClassname = paddingTop =>
    switch paddingTop {
    | Spacing.Xs =>  "-padding-top-xs"
    | Spacing.Sm =>  "-padding-top-sm"
    | Spacing.Md =>  "-padding-top-md"
    | Spacing.Lg =>  "-padding-top-lg"
    | Spacing.Xl =>  "-padding-top-xl"
    | Spacing.Xl2 => "-padding-top-xl2"
    | Spacing.Xl3 => "-padding-top-xl3"
    | Spacing.Xl4 => "-padding-top-xl4"
    | Spacing.Unset => ""
    };

  let mapPaddingBottomToClassname = paddingBottom =>
    switch paddingBottom {
    | Spacing.Xs =>  "-padding-bottom-xs"
    | Spacing.Sm =>  "-padding-bottom-sm"
    | Spacing.Md =>  "-padding-bottom-md"
    | Spacing.Lg =>  "-padding-bottom-lg"
    | Spacing.Xl =>  "-padding-bottom-xl"
    | Spacing.Xl2 => "-padding-bottom-xl2"
    | Spacing.Xl3 => "-padding-bottom-xl3"
    | Spacing.Xl4 => "-padding-bottom-xl4"
    | Spacing.Unset => ""
    };

  let mapPaddingHorizontalToClassname = paddingX =>
    switch paddingX {
    | Spacing.Xs =>  "-padding-horizontal-xs"
    | Spacing.Sm =>  "-padding-horizontal-sm"
    | Spacing.Md =>  "-padding-horizontal-md"
    | Spacing.Lg =>  "-padding-horizontal-lg"
    | Spacing.Xl =>  "-padding-horizontal-xl"
    | Spacing.Xl2 => "-padding-horizontal-xl2"
    | Spacing.Xl3 => "-padding-horizontal-xl3"
    | Spacing.Xl4 => "-padding-horizontal-xl4"
    | Spacing.Unset => ""
    };

  let mapPaddingVerticalToClassname = paddingY =>
    switch paddingY {
    | Spacing.Xs =>  "-padding-vertical-xs"
    | Spacing.Sm =>  "-padding-vertical-sm"
    | Spacing.Md =>  "-padding-vertical-md"
    | Spacing.Lg =>  "-padding-vertical-lg"
    | Spacing.Xl =>  "-padding-vertical-xl"
    | Spacing.Xl2 => "-padding-vertical-xl2"
    | Spacing.Xl3 => "-padding-vertical-xl3"
    | Spacing.Xl4 => "-padding-vertical-xl4"
    | Spacing.Unset => ""
    };
};

[@react.component]
let make = (
  ~className="",
  ~alignItems=AlignItems.Unset,
  ~flex=false,
  ~flexDirection=FlexDirection.Unset,
  ~grow=false,
  ~justifyContent=JustifyContent.Unset,
  ~padding=Spacing.Unset,
  ~paddingTop=Spacing.Unset,
  ~paddingBottom=Spacing.Unset,
  ~paddingX=Spacing.Unset,
  ~paddingY=Spacing.Unset,
  ~onClick=?,
  ~style=?,
  ~children) => {

  let alignItemsClasses = Utils.mapAlignItemsToClassname(alignItems);
  let flexDirectionClasses = Utils.mapFlexDirectionToClassname(flexDirection);
  let justifyContentClasses = Utils.mapJustifyContentToClassname(justifyContent);
  let paddingClasses = Utils.mapPaddingToClassname(padding);
  let paddingTopClasses = Utils.mapPaddingTopToClassname(paddingTop);
  let paddingBottomClasses = Utils.mapPaddingBottomToClassname(paddingBottom);
  let paddingHorizontalClasses = Utils.mapPaddingHorizontalToClassname(paddingX);
  let paddingVerticalClasses = Utils.mapPaddingVerticalToClassname(paddingY);

  let classes = append([
    "box",
    "-flex" -> on(flex),
    flexDirectionClasses,
    alignItemsClasses,
    justifyContentClasses,
    "-flex-grow" -> on(grow),
    paddingClasses,
    paddingTopClasses,
    paddingBottomClasses,
    paddingHorizontalClasses,
    paddingVerticalClasses,
    className,
  ]);

  <div className=classes ?style ?onClick>children</div>;
};
