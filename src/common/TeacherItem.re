open Icon;
open Utils;

requireCSS("../styles/teacher-item.css");

[@react.component]
let make = () => {
  <article className="teacher-item">
    <header>
      <img
        src="https://avatars0.githubusercontent.com/u/735556?s=460&v=4"
        alt="Danilo Barros"
      />

      <div>
        <strong>"Danilo Barros" -> React.string</strong>
        <span>"React" -> React.string</span>
      </div>
    </header>

    <p>
      "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua." -> React.string
      <br /> <br />
    </p>

    <footer>
      <p>
        "Cost/hour" -> React.string
        <strong>"$ 75.00" -> React.string</strong>
      </p>

      <button type_="button">
        <Icon name={Whatsapp} alt="whatsapp" />
        "Make contact" -> React.string
      </button>
    </footer>
  </article>
}
