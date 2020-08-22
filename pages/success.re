open Flex;
open Image;

module GenericSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger purpleBg=true>"Sweet!"</Text>
    </>;
};

module SignupSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger purpleBg=true>"Application complete!"</Text>
      <Text type_=Text purpleBg=true>"Now you are part of Proffy family"</Text>
    </>;
};

module ResetPasswordSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger purpleBg=true>"E-mail sent!"</Text>
      <Text type_=Text purpleBg=true>"Check your e-mail and follow instructions to reset your password"</Text>
    </>;
};

[@react.component]
let default = () => {
  let router = Next.useRouter();

  let backToLogin = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/login", ());
  };

  let fromPage = router.query
    -> Js.Dict.get("from");

  let content = switch fromPage {
  | Some(param) when param === "signup" => <SignupSuccess />
  | Some(param) when param === "reset" => <ResetPasswordSuccess />
  | Some(_) => <GenericSuccess />
  | None => <GenericSuccess />
  };

  <PageContainer className="success-page">
    <Flex
      direction=Direction.Column
      grow=true
      paddingX=Spacing.Lg
      paddingY=Spacing.Xl2
    >
      <Flex
        alignItems=AlignItems.Center
        justifyContent=JustifyContent.Center
        direction=Direction.Column
        grow=true
      >
        <Image name=Success />
        content
      </Flex>

      <Button type_=Primary onClick=backToLogin>"Go Back to Login"</Button>
    </Flex>
  </PageContainer>
};
