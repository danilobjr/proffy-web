open React;
open Next;
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
          <Link href="/">
            <a className="sign-up">"Sign up" -> string</a>
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

            <Link href="/">
              <a className="forgot">"Forgot my password" -> string</a>
            </Link>
          </div>

          <Button>"Enter" -> string</Button>
        </form>
      </div>
    </section>
  </div>;
