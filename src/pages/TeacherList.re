open Utils;

requireCSS("../styles/pages/teacher-list.css");

[@react.component]
let make = () => {
  // React.useEffect(() => {
  //   Api.Teachers.fetch(~subject="Math", ~weekDay="1", ~time="540", result => {
  //     switch result {
  //     | Ok(teachers) => Js.log(teachers)
  //     | Error(error) => Js.log(error)
  //     };
  //   });

  //   None;
  // });

  <Page className="teacher-list">
    <AppBar title="Available proffys">
      <form>
        <Input
          label="Subject"
          name="subject"
          value="Math"
        />

        <Input
          label="Week day"
          name="week-day"
          value="Monday"
        />

        <Input
          label="Time"
          name="time"
          value=""
        />

        <Button text="Search" />
      </form>
    </AppBar>

    <PageContent>
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
      <TeacherItem />
    </PageContent>
  </Page>;
};
