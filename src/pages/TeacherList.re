open Utils;

requireCSS("../styles/pages/teacher-list.css");

[@react.component]
let make = () => {
  React.useEffect(() => {
    Api.Teachers.fetch(~subject="Math", ~weekDay="1", ~time="540", result => {
      switch result {
      | Ok(teachers) => Js.log(teachers)
      | Error(error) => Js.log(error)
      };
    });

    Some(_ => ());
  });

  // <div id="page-teacher-list">
  <Page id="teacher-list">
    <AppBar title="Available proffys">
      <form id="search-teachers">
        <div className="input-block">
          <label htmlFor="subject"> "Subject"->React.string </label>
          <input type_="text" id="subject" />
        </div>

        <div className="input-block">
          <label htmlFor="week_day"> "Week day"->React.string </label>
          <input type_="text" id="week_day" />
        </div>

        <div className="input-block">
          <label htmlFor="time"> "Time"->React.string </label>
          <input type_="text" id="time" />
        </div>
      </form>
    </AppBar>

    <Container>
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
    </Container>
  </Page>;
};
