// import PageHeader from "../../components/PageHeader";
// import TeacherItem from "../../components/TeacherItem";

open PageHeader;
open Utils;

requireCSS("../styles/teacher-list.css");

[@react.component]
let make = () => {
  <div id="page-teacher-list" className="container">
    <PageHeader title="Available proffys">
      <form id="search-teachers">
        <div className="input-block">
          <label htmlFor="subject">"Subject" -> React.string</label>
          <input type_="text" id="subject" />
        </div>

        <div className="input-block">
          <label htmlFor="week_day">"Week day" -> React.string</label>
          <input type_="text" id="week_day" />
        </div>

        <div className="input-block">
          <label htmlFor="time">"Time" -> React.string</label>
          <input type_="text" id="time" />
        </div>
      </form>
    </PageHeader>

    <main>
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
    </main>
  </div>
}
