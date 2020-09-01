open Flex;
open Image;

module GenericSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger purpleBg=true>"Sweet!"</Text>
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

module SignupSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger purpleBg=true>"Application complete!"</Text>
      <Text type_=Text purpleBg=true>"Now you are part of Proffy family"</Text>
    </>;
};

module TeachSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger purpleBg=true>"Well done!"</Text>
      <Text type_=Text purpleBg=true>"You are in our list of available tutors. Now stay tuned on your WhatsApp"</Text>
    </>;
};

module Url = {
  type fromType =
    | Reset
    | Signup
    | Teach;

  let queryParam = (value, param) =>
    switch param {
    | "from" =>
      switch value {
      | Some("reset") =>  Some(Reset)
      | Some("signup") => Some(Signup)
      | Some("teach") =>  Some(Teach)
      | Some(_) => None
      | None => None
      };
    | _ => None
    }
};

[@react.component]
let default = () => {
  let router = Next.useRouter();

  let navigateToLoginPage = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/login", ());
  };

  let navigateToTeachPage = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/teach", ());
  };

  let fromPage = router.query
    -> Js.Dict.get("from")
    -> Url.queryParam("from");

  let content = switch fromPage {
  | Some(Reset) => <ResetPasswordSuccess />
  | Some(Signup) => <SignupSuccess />
  | Some(Teach) => <TeachSuccess />
  | None => <GenericSuccess />
  };

  let button = switch fromPage {
  | Some(Reset)
  | Some(Signup) => <Button type_=Primary onClick=navigateToLoginPage>"Go Back to Login"</Button>
  | Some(Teach) => <Button type_=Primary onClick=navigateToTeachPage>"Back"</Button>
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

      button
    </Flex>
  </PageContainer>
};
