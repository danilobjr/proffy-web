open Box;
open FormField;

type formData = {
  email: string,
  password: string,
  rememberme: bool,
};

// TODO extract form to its own component with spellCheck=false

[@react.component]
let default = () => {
  let router = Next.useRouter();
  let (formData, setFormData) = React.useState(_ => {
    email: "danilo@email.com.br",
    password: "12345678",
    rememberme: false,
  });

  let handleChange = (update, e) => {
    let target = ReactEvent.Form.target(e);
    let currentValue = target##value;
    setFormData(state => update(state, currentValue));
  };

  let handleCheckboxChange = (update, newValue) => {
    setFormData(state => update(state, newValue))
  };

  let handleFormSubmit = e => {
    e -> ReactEvent.Form.preventDefault;
    router -> Next.Router.push(~url="/home", ());
  };

  <PageContainer className="login-page">
    <Hero.Brand />

    <Box
      grow=true
      paddingX=Spacing.Lg
      paddingY=Spacing.Xl2
    >
      <Flex
        alignItems=AlignItems.Center
        justifyContent=JustifyContent.SpaceBetween
      >
        <Text type_=Title>"Login"</Text>
        <Link className="sign-up" href="/signup">
          "Sign up"
        </Link>
      </Flex>

      <form spellCheck=false onSubmit=handleFormSubmit>
        <div className="main-fields">
          <InputText
            label="E-mail"
            name="email"
            boxed=true
            value=formData.email
            onChange=handleChange((state, value) => { ...state, email: value })
          />

          <InputPassword
            label="Password"
            name="password"
            boxed=true
            value=formData.password
            onChange=handleChange((state, value) => { ...state, password: value })
          />
        </div>

        <Flex
          className="remember"
          alignItems=AlignItems.Center
          justifyContent=JustifyContent.SpaceBetween
        >
          <Checkbox
            label="Remember me"
            name="rememberme"
            checked=formData.rememberme
            onChange=handleCheckboxChange((state, value) => { ...state, rememberme: value })
          />

          <Link className="forgot" href="/reset">
            "Forgot my password"
          </Link>
        </Flex>

        <Button type_=Primary>"Enter"</Button>
      </form>
    </Box>
  </PageContainer>;
}
