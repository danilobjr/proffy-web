open Box;
open Classnames;

module Container = {
  [@react.component]
  let make = (
    ~className="",
    ~alignItems=AlignItems.Center,
    ~justifyContent=?,
    ~padding=?,
    ~paddingBottom=?,
    ~showBg=false,
    ~children) => {

    let classes = append(["hero-container", "-bg" -> on(showBg), className]);

    <Flex
      className=classes
      direction=FlexDirection.Column
      alignItems
      ?justifyContent
      ?padding
      ?paddingBottom
    >
      children
    </Flex>;
  };
};

module Brand = {
  [@react.component]
  let make = () => {
    <Container className="-brand" showBg=true justifyContent=JustifyContent.Center>
      <Flex direction=FlexDirection.Column justifyContent=JustifyContent.Center>
        <ProffyLogo />
        <Text type_=Text purpleBg=true>"Lessons platform"</Text>
      </Flex>
    </Container>;
  };
};
