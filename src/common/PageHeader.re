open Icon;
open Img;
open Utils;

requireCSS("../styles/page-header.css");

[@react.component]
let make = (~title, ~subtitle: option(string)=?, ~children) => {
  let subtitle' =
    switch subtitle {
    | Some(s) => <p>s -> React.string</p>
    | None => React.null
    };

  <header className="page-header">
    <div className="top-bar-container">
      <Link href="/">
        <Icon name=Back alt="back" />
      </Link>

      <Img name=Logo alt="proffy logo" />
    </div>

    <div className="header-content">
      <strong>title -> React.string</strong>
      subtitle'
      children
    </div>
  </header>;
};
