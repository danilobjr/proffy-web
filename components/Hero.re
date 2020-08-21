open Classnames;

module Container = {
  [@react.component]
  let make = (~className="", ~showBg=false, ~children) => {
    let classes = append(["hero-container", "-bg" -> on(showBg), className]);

    <div className=classes>
      children
    </div>;
  };
};

module Brand = {
  [@react.component]
  let make = () => {
    <Container showBg=true className="-brand">
      <div className="box">
        <ProffyLogo />
        <Text type_=Text purpleBg=true>"Lessons platform"</Text>
      </div>
    </Container>;
  };
};
