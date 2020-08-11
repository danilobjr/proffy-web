open React;
open Icon;
open Img;
open Router;
open Text;

[@react.component]
let make = () => {
  <Page className="login">
    <section>
      <Img name=Background />
      <Img name=Logo />
      <Text type_=Slogan>"Your online learning platform" -> string</Text>
    </section>

    <section>
      <header>
        <Text type_=Title>"Login" -> string</Text>
        <Link route=Home>
          <Text type_=Anchor>"Sign Up" -> string</Text>
        </Link>
      </header>

      <form>
        <div>
          <label>"E-mail" -> string</label>
          <input type_="text" defaultValue="" />
        </div>

        <div>
          <label>"Password" -> string</label>
          <input type_="password" defaultValue="" />
          <Icon name=Smile />
        </div>

        <div>
          <div>
            <label>"Remember me" -> string</label>
            <input type_="checkbox" />
          </div>

          <Link route=Home>
            <Text type_=Anchor>"Forgot password" -> string</Text>
          </Link>
        </div>

        <Button text="Enter" />
      </form>
    </section>
  </Page>
};
