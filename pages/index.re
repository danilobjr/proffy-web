open React;
open Next;
open Icon;


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
          <h1 className="login">"Login" -> string</h1>
          <Link href="/">
            <a className="sign-up">"Sign up" -> string</a>
          </Link>
        </header>

        <form>
          <div className="main-fields">
            <div className="form-field">
              <label htmlFor="email">"E-mail" -> string</label>
              <input id="email" type_="text" />
            </div>

            <div className="form-field -password">
              <label htmlFor="password">"Password" -> string</label>
              <input id="password" type_="password" />
              <Icon name=SeePassword />
            </div>
          </div>

          <div className="remember-box">
            <div className="form-field -checkbox">
              <input id="remember-me" type_="checkbox" />
              <label htmlFor="">"Remember me" -> string</label>
            </div>

            <Link href="/">
              <a className="forgot">"Forgot my password" -> string</a>
            </Link>
          </div>

          <button className="button">"Enter" -> string</button>
        </form>
      </div>
    </section>
  </div>;
