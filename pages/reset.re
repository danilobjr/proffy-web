open Flex;
open FormField;

[@react.component]
let default = () => {
  let router = Next.useRouter();

  let handleBackClick = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/login", ());
  };

  let handleSendClick = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/success?from=reset", ());
  };

  <PageContainer className="reset-page">
    <Hero.Brand />

    <AppBar light=true onBackClick=handleBackClick />

    <Flex
      className="content"
      alignItems=AlignItems.Stretch
      direction=Direction.Column
      grow=true
      paddingX=Spacing.Lg
      paddingY=Spacing.Xl2
      paddingTop=Spacing.Md
    >
      <Flex
        className="header"
        direction=Direction.Column
        grow=true
      >
        <Text type_=Title>"Forgot your password?"</Text>
        <Text>"No problem. We send a reset password link to your e-mail"</Text>
      </Flex>

      <form>
        <InputText
          label="E-mail"
          name="email"
          boxed=true
        />

        <Button type_=Primary onClick=handleSendClick>"Send"</Button>
      </form>
    </Flex>
  </PageContainer>
};
