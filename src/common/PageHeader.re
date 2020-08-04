open Icon;
open Img;
open Utils;

requireCSS("../styles/page-header.css");

[@react.component]
let make = (~children, ~title: string) => {
  <header className="page-header">
    <div className="top-bar-container">
      <Link href="/">
        <Icon name=Back alt="back" />
      </Link>

      <Img name=Logo alt="proffy logo" />
    </div>

    <div className="header-content">
      <strong>title -> React.string</strong>
      children
    </div>
  </header>;
};
