open Icon;
open Img;
open Utils;

requireCSS("../styles/app-bar.css");

[@react.component]
let make = (~title, ~subtitle: option(string)=?, ~children) => {
  let subtitle' =
    switch subtitle {
    | Some(s) => <p>s -> React.string</p>
    | None => React.null
    };

  <header className="app-bar">
    <section className="container">
      <Link href="/">
        <Icon name=Back alt="back" />
      </Link>

      <Img name=Logo alt="proffy logo" />
    </section>

    <div className="content">
      <strong>title -> React.string</strong>
      subtitle'
      children
    </div>
  </header>;
};
