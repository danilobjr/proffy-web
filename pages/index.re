open Button;
open FormField;
open Text;

type formData = {
  email: string,
  password: string,
  rememberme: bool,
};

// TODO extract form to its own component with spellCheck=false

[@react.component]
let default = () => {
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

  <Page className="login-page">
    <section className="brand">
      <div className="box">
        <ProffyLogo />
        <Text type_=Slogan>"Lessons platform"</Text>
      </div>
    </section>

    <section className="login">
      <div className="box">
        <header>
          <Text type_=Title>"Login"</Text>
          <Link className="sign-up" href="/">
            "Sign up"
          </Link>
        </header>

        <form spellCheck=false>
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

          <div className="remember-box">
            <Checkbox
              label="Remember me"
              name="rememberme"
              checked=formData.rememberme
              onChange=handleCheckboxChange((state, value) => { ...state, rememberme: value })
            />

            <Link className="forgot" href="/">
              "Forgot my password"
            </Link>
          </div>

          <Button type_=Primary>"Enter"</Button>
        </form>
      </div>
    </section>
  </Page>;
}
