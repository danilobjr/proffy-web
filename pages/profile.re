open Flex;
open FormField;

[@react.component]
let default = () => {
  let router = Next.useRouter();

  let handleBackClick = _ => router -> Next.Router.push(~url="/home", ());

  <PageContainer className="profile-page">
    <AppBar title="Profile" onBackClick=handleBackClick />

    <Hero.Container showBg=true>
      <img
        className="userimage"
        src="https://github.com/danilobjr.png"
        alt="user image"
      />

      <Text type_=Title purpleBg=true>"Danilo Barros"</Text>
    </Hero.Container>

    <Box className="content" padding=Spacing.Sm>
      <form>
        <Flex className="card" direction=Direction.Column padding=Spacing.Md>
          <Text type_=Title>"Your data"</Text>

          <InputText
            label="Name"
            name="name"
          />

          <InputText
            label="Surname"
            name="surname"
          />

          <InputText
            label="E-mail"
            name="email"
          />

          <InputText
            label="Whatsapp"
            name="whatsapp"
          />

          <InputText
            label="About you"
            name="about"
          />
        </Flex>

        <Box className="footer" padding=Spacing.Md>
          <Button type_=Primary>"Save"</Button>
        </Box>
      </form>
    </Box>
  </PageContainer>
};
