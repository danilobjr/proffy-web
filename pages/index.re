// TODO move this to home.re file and do a redirect
[@react.component]
let default = () => {
  <Page className="home-page">
    <Hero>
      <AppBar noBackButton=true>
        <img className="userimage" src="https://github.com/danilobjr.png" alt="user profile image" />
        <Text>"Danilo Barros"</Text>
        <Button icon=Power />
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
  </Page>
};
