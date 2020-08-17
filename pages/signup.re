open FormField;
open Text;

[@react.component]
let default = () => {
  <Page className="signup">
    <AppBar />

    <PageContent>
      <header>
        <Text type_=TitleBigger>"Create a free account"</Text>
        <Text>"We need some information about you"</Text>
      </header>

      <form>
        <section>
          <h2>
            <Text type_=Title>
              "01. Who are you?"
            </Text>
          </h2>

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

          <Button>"Next"</Button>
        </section>
      </form>
    </PageContent>
  </Page>
};
