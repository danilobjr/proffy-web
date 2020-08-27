open Flex;
open FormField;

[@react.component]
let default = () => {
  let router = Next.useRouter();

  let goBackPage = _ => router -> Next.Router.push(~url="/home", ());

  <PageContainer className="teach-page">
    <AppBar title="Teach" onBackClick=goBackPage />

    <Hero.Container
      padding=Spacing.Lg
      paddingBottom=Spacing.Xl4
      alignItems=AlignItems.Start
    >
      <Text type_=Title purpleBg=true>"Awesome! Let's spread knowledge"</Text>

      <Text
        className="subtitle"
        type_=Text
        purpleBg=true
      >
        "Tell us what you wish to teach and when"
      </Text>
    </Hero.Container>

    <Box className="content" padding=Spacing.Sm>
      <Flex
        className="card
        -has-footer"
        direction=Direction.Column
        padding=Spacing.Md
      >
        <div className="title">
          <Text type_=Text.Title>"Subject"</Text>
        </div>

        <InputText
          label="Subject"
          name="subject"
        />

        <InputText
          label="Cost per hour"
          name="cost"
        />

        <Flex
          className="title"
          alignItems=AlignItems.Center
          justifyContent=JustifyContent.SpaceBetween
        >
          <Text type_=Text.Title>"Schedule"</Text>

          <a>
            <Text type_=Text.Link>"+ Add"</Text>
          </a>
        </Flex>

        <InputText
          label="Week day"
          name="cost"
        />

        <Flex justifyContent=JustifyContent.Center>
          <InputText
            label="From"
            name="from"
          />

          <InputText
            className="to-field"
            label="To"
            name="to"
          />
        </Flex>
      </Flex>

      <Box className="footer" padding=Spacing.Md>
        <Button type_=Primary>"Save"</Button>
      </Box>
    </Box>
  </PageContainer>
}
