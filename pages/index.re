open React;
open FormField;


[@react.component]
let default = () =>
  <div className="login-page">
    <section className="brand">
      <div className="box">
        <ProffyLogo />
        <span className="slogan">"Lessons platform" -> string</span>
      </div>
    </section>

    <section className="login">
      <div className="box">
        <header>
          <h1 className="title">"Login" -> string</h1>

          <Link className="sign-up" href="/">
            "Sign up" -> string
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
              "Forgot my password" -> string
            </Link>
          </div>

          <Button>"Enter" -> string</Button>
        </form>
      </div>
    </section>
  </div>;
