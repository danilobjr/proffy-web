open FormField;

[@react.component]
let default = () => {
  let (viewIndex, setViewIndex) = React.useState(_ => 0);
  let router = Next.useRouter();

  let handleBackButtonClick = _ => {
    switch (viewIndex === 0) {
    | true => router -> Next.Router.push(~url="/login", ())
    | false => setViewIndex(_ => 0)
    };
  };

  let handleNextButtonClick = e => {
    e -> ReactEvent.Mouse.preventDefault;
    setViewIndex(_ => 1);
  };

  let handleCreateButtonClick = e => {
    e -> ReactEvent.Mouse.preventDefault;
    router -> Next.Router.push(~url="/success?from=signup", ());
  };

  <PageContainer className="signup">
    <AppBar onBackClick=handleBackButtonClick>
      <PageIndicator amount=2 currentIndex=viewIndex />
    </AppBar>

    <PageContent>
      <header>
        <Text type_=TitleBigger>"Create a free account"</Text>
        <Text>"We need some information about you"</Text>
      </header>
    </PageContent>

    <form>
      <Slider index=viewIndex>
        <Slider.View>
          <PageContent>
            <Text type_=Title>
              "01. Who are you?"
            </Text>

            <div className="fields">
              <InputText
                label="Name"
                name="name"
                boxed=true
              />

              <InputText
                label="Surname"
                name="surname"
                boxed=true
              />
            </div>

            <Button onClick=handleNextButtonClick>"Next"</Button>
          </PageContent>
        </Slider.View>

        <Slider.View>
          <PageContent>
            <Text type_=Title>
              "02. Email and Password"
            </Text>

            <div className="fields">
              <InputText
                label="E-mail"
                name="email"
                boxed=true
              />

              <InputPassword
                label="Password"
                name="password"
                boxed=true
              />
            </div>

            <Button type_=Primary onClick=handleCreateButtonClick>"Create account"</Button>
          </PageContent>
        </Slider.View>
      </Slider>
    </form>
  </PageContainer>;
};
