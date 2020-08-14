open FormField;
open Text;


[@react.component]
let default = () =>
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

        <form>
          <div className="main-fields">
            <InputText
              name="email"
              label="E-mail"
              boxed=true
            />

            <InputPassword
              name="password"
              label="Password"
              boxed=true
            />
          </div>

          <div className="remember-box">
            <Checkbox name="rememberme" label="Remember me" />

            <Link className="forgot" href="/">
              "Forgot my password"
            </Link>
          </div>

          <Button>"Enter"</Button>
        </form>
      </div>
    </section>
  </Page>;
