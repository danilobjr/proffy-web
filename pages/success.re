open Image;

module GenericSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger onPurpleBg=true>"Sweet!"</Text>
    </>;
};

module SignupSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger onPurpleBg=true>"Application complete!"</Text>
      <Text type_=Text onPurpleBg=true>"Now you are part of Proffy family"</Text>
    </>;
};

module ResetPasswordSuccess = {
  [@react.component]
  let make = () =>
    <>
      <Text type_=TitleBigger onPurpleBg=true>"E-mail sent!"</Text>
      <Text type_=Text onPurpleBg=true>"Check your e-mail and follow instructions to reset your password"</Text>
    </>;
};

[@react.component]
let default = () => {
  let router = Next.useRouter();

  let backToLogin = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/", ());
  };

  let fromPage = router.query
    -> Js.Dict.get("from");

  let content = switch fromPage {
  | Some(param) when param === "signup" => <SignupSuccess />
  | Some(param) when param === "reset" => <ResetPasswordSuccess />
  | Some(_) => <GenericSuccess />
  | None => <GenericSuccess />
  };

  <Page className="success">
    <PageContent>
      <div className="box">
        <Image name=Success />
        content
      </div>
      <Button type_=Primary onClick=backToLogin>"Go Back to Login"</Button>
    </PageContent>
  </Page>
};
