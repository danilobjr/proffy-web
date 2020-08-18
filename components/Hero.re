open Classnames;

[@react.component]
let make = (~className="", ~children) => {
  let classes = append(["hero-container", className]);

  <section className=classes>
    children
  </section>;
};

module Brand = {
  [@react.component]
  let make = () => {
    <section className="hero-container -brand">
      <div className="box">
        <ProffyLogo />
        <Text type_=Text purpleBg=true>"Lessons platform"</Text>
      </div>
    </section>;
  };
};
