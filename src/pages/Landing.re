open Icon
open Img
open Utils

requireCSS("../styles/pages/landing.css")

[@react.component]
let make = () =>
  <div id="page-landing">
    <div id="page-landing-content" className="container">
      <div className="logo-container">
        <Img name={Logo} alt="proffy logo" />
        <h2>"Your online lessons platform" -> React.string</h2>
      </div>

      <Img
        className="hero-image"
        name={Landing}
        alt="platform"
      />

      <div className="buttons-container">
        <Link className="learn" href="/learn">
          <Icon name={Study} alt="learn" />
          "Learn" -> React.string
        </Link>

        <Link className="give-classes" href="/teach">
          <Icon name={Teach} alt="teach" />
          "Teach" -> React.string
        </Link>
      </div>

      <span className="total-connections">
        "More than 200 lessons scheduled" -> React.string
        <Icon name={Heart} alt="heart" />
      </span>
    </div>
  </div>


