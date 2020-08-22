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
        <Box className="card" padding=Spacing.Md>
          <Flex className="fieldset" direction=Direction.Column>
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

          <Flex className="fieldset" direction=Direction.Column>
            <Text type_=Title>"About lesson"</Text>

            <InputText
              label="Subject"
              name="subject"
            />

            <InputText
              label="Cost per hour"
              name="cost"
            />
          </Flex>

          <Flex className="fieldset" direction=Direction.Column>
            <Text type_=Title>"Schedule"</Text>

            <InputText
              label="Week day"
              name="weekday"
            />

            <InputText
              label="From"
              name="from"
            />

            <InputText
              label="To"
              name="to"
            />
          </Flex>
        </Box>

        <Box className="footer" padding=Spacing.Md>
          <Button type_=Primary>"Save"</Button>
        </Box>
      </form>
    </Box>
  </PageContainer>
};
