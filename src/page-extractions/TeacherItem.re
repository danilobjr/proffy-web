open Icon;
open Utils;

requireCSS("../styles/page-extractions/teacher-item.css");

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

    <main>
      <p>
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua." -> React.string
      </p>
    </main>

    <footer>
      <div>
        <span>"Per lesson" -> React.string</span>
        <strong>"$ 75.00" -> React.string</strong>
      </div>

      <Button
        icon=Whatsapp
        text="Make contact"
      />
    </footer>
  </article>
}
