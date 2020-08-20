[@react.component]
let default = () => {
  let router = Next.useRouter();

  let handleLogoutClick = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/login", ());
  };

  <PageContainer className="home-page">
    <Hero>
      <AppBar noBackButton=true>
        <img className="userimage" src="https://github.com/danilobjr.png" alt="user profile image" />
        <Text>"Danilo Barros"</Text>
        <Button icon=Power onClick=handleLogoutClick />
      </AppBar>

      <div className="box">
        <Image name=Illustration />
      </div>
    </Hero>

    <PageContent>
      <Text type_=TextBigger>"Welcome"</Text>
      <Text type_=TextBigger bold=true>"What you're looking for?"</Text>

      <div className="buttons">
        <Button icon=Book>"Learn"</Button>
        <Button type_=Primary icon=Easel>"Teach"</Button>
      </div>

      <footer>
        <Text>"Connections already scheduled"</Text>
        <Icon name=Heart />
      </footer>
    </PageContent>
  </PageContainer>
};
