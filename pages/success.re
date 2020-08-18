open Image;

[@react.component]
let default = () => {
  let router = Next.useRouter();

  let backToLogin = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/", ());
  };

  <Page className="success">
    <PageContent>
      <div className="box">
        <Image name=Success />
        <Text type_=TitleBigger onPurpleBg=true>"Application complete!"</Text>
        <Text type_=Text onPurpleBg=true>"Now you are part of Proffy family"</Text>
      </div>
      <Button type_=Primary onClick=backToLogin>"Go Back to Login"</Button>
    </PageContent>
  </Page>
};
