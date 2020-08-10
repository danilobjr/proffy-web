open Icon
open Img
open Utils

requireCSS("../styles/pages/landing-page.css");

[@react.component]
let make = () =>
  <div className="landing-page">
    <main className="content">
      <div className="logo">
        <Img name=Logo alt="proffy logo" />
        <h2>"Your online lessons platform" -> React.string</h2>
      </div>

      <Img
        className="hero-image"
        name=Landing
        alt="platform"
      />

      <nav>
        <Link className="learn" route=Learn>
          <Icon name=Study alt="learn" />
          "Learn" -> React.string
        </Link>

        <Link className="teach" route=Teach>
          <Icon name=Teach alt="teach" />
          "Teach" -> React.string
        </Link>
      </nav>

      <span className="connections">
        "More than 200 lessons scheduled" -> React.string
        <Icon name=Heart alt="heart" />
      </span>
    </main>
  </div>


