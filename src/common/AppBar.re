open Icon;
open Utils;

requireCSS("../styles/common/app-bar.css");

[@react.component]
let make = (~title, ~subtitle: option(string)=?, ~children) => {
  let subtitle' =
    switch subtitle {
    | Some(s) => <p>s -> React.string</p>
    | None => React.null
    };

  <header className="app-bar">
    <Container className="top" breakpoint=Fluid>
      <Link route=Home>
        <Icon name=Back alt="back" />
      </Link>
    </Container>

    <Container className="content" breakpoint=Medium>
      <strong>title -> React.string</strong>
      subtitle'
      children
    </Container>
  </header>;
};
