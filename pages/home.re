[@react.component]
let default = () => {
  // TODO create a useUrlPush to encapsulate next code for push a url
  let router = Next.useRouter();

  let handleLogoutClick = _ => router -> Next.Router.push(~url="/login", ());
  let goToProfilePage = _ => router -> Next.Router.push(~url="/profile", ());

  <PageContainer className="home-page">
    <Hero.Container>
      <AppBar noBackButton=true>
        <img
          className="userimage leftcolumn"
          src="https://github.com/danilobjr.png"
          alt="user profile image"
          onClick=goToProfilePage
        />

        <Text onClick=goToProfilePage>"Danilo Barros"</Text>
        <Button className="rightcolumn" icon=Power onClick=handleLogoutClick />
      </AppBar>

      <Image name=Welcome />
    </Hero.Container>

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
