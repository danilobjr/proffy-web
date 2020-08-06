open Icon;
open Select;
open Utils;

requireCSS("../styles/teacher-form.css");

// let useForm = (initialState) => {
//   let (state, setState) = React.useState(_ => initialState);

//   let handleChange = (e: ReactEvent.Form.t) => {
//     let value = ReactEvent.Form.target(e)##value;
//     let fieldName = ReactEvent.Form.target(e)##name;

//     setState(currentState => {
//       ...currentState, [fieldName]: value
//     })
//   };
// };

type schedule = {
  uuid: string,
  weekDay: string,
  from: string,
  to_: string,
};

type updatedValue = string;
type callback = (schedule, updatedValue) => schedule;

[@react.component]
let make = () => {
  let (name, setName) = React.useState(_ => "");
  let (avatar, setAvatar) = React.useState(_ => "");
  let (whatsapp, setWhatsapp) = React.useState(_ => "");
  let (profile, setProfile) = React.useState(_ => "");
  let (cost, setCost) = React.useState(_ => "");
  let (subject, setSubject) = React.useState(_ => "");
  let (schedule, setSchedule) = React.useState(_ => [|
    { uuid: "default", weekDay: "", from: "", to_: "" }
  |]);

  let handleChange = (handler, e) => {
    let value = ReactEvent.Form.target(e)##value;
    handler(_ => value);
  };

  let setScheduleItemValue = (uuid, callback: callback, e) => {
    let updatedValue = ReactEvent.Form.target(e)##value;

    let updatedScheduleItems =
      schedule
      |> Array.map(s => {
        switch (s.uuid === uuid) {
        | true => callback(s, updatedValue)
        | false => s
        };
      });

    setSchedule(_ => updatedScheduleItems);
  };

  let handleSubmit = e => {
    e |> ReactEvent.Form.preventDefault;

    Js.log(name);
    Js.log(avatar);
    Js.log(whatsapp);
    Js.log(profile);
    Js.log(cost);
    Js.log(subject);
    Js.log(schedule);
  };

  let scheduleItems =
    schedule
    |> Array.map (s =>
      <div key=s.weekDay className="schedule-item">
        <Select
          name="week_day"
          label="Week day"
          value=s.weekDay
          onChange={setScheduleItemValue(s.uuid, (s', value) => { ...s', weekDay: value })}
          options=[|
            { value: "0", label: "Sunday" },
            { value: "1", label: "Monday" },
            { value: "2", label: "Tuesday" },
            { value: "3", label: "Wednesday" },
            { value: "4", label: "Thursday" },
            { value: "5", label: "Friday" },
            { value: "6", label: "Saturday" }
          |]
        />

        <Input
          name="from"
          label="From"
          type_="time"
          value=s.from
          onChange={setScheduleItemValue(s.uuid, (s', value) => { ...s', from: value })}
        />

        <Input
          name="to"
          label="To"
          type_="time"
          value=s.to_
          onChange={setScheduleItemValue(s.uuid, (s', value) => { ...s', to_: value })}
        />
      </div>
    )
    |> React.array;

  <div>
    <div id="page-teacher-form" className="container">
      <PageHeader
        title="Let's spread knowlodge to the world!"
        subtitle="First step is to submit this subscription form"
      >
        React.null
      </PageHeader>

      <main>
        <form onSubmit=handleSubmit>
          <fieldset>
            <legend>"Personal data" -> React.string</legend>

            <Input
              name="name"
              label="Full name"
              value=name
              onChange=handleChange(setName)
            />

            <Input
              name="avatar"
              label="Avatar"
              value=avatar
              onChange=handleChange(setAvatar)
            />

            <Input
              name="whatsapp"
              label="WhatsApp"
              value=whatsapp
              onChange=handleChange(setWhatsapp)
            />

            <Textarea
              name="profile"
              label="Profile"
              value=profile
              onChange=handleChange(setProfile)
            />
          </fieldset>

          <fieldset>
            <legend>"Lesson" -> React.string</legend>

            <Select
              name="subject"
              label="Subject"
              value=subject
              onChange=handleChange(setSubject)
              options=[|
                { value: "Arts", label: "Arts" },
                { value: "Biology", label: "Biology" },
                { value: "Science", label: "Science" },
                { value: "Physical Education", label: "Physical Education" },
                { value: "Philosofy", label: "Philosofy" },
                { value: "Physics", label: "Physics" },
                { value: "Geography", label: "Geography" },
                { value: "History", label: "History" },
                { value: "English", label: "English" },
                { value: "Math", label: "Math" },
                { value: "Chemistry", label: "Chemistry" },
                { value: "Sociology", label: "Sociology" }
              |]
            />

            <Input
              name="cost"
              label="Cost per hour"
              value=cost
              onChange=handleChange(setCost)
            />
          </fieldset>

          <fieldset>
            <legend>
              "Schedule" -> React.string

              <button type_="button">
                "+ New" -> React.string
              </button>
            </legend>

            {scheduleItems}
          </fieldset>

          <footer>
            <p>
              <Icon name=Warning alt="Warning"/>
              "Important!" -> React.string
              <br />
              "Fulfill all the information." -> React.string
            </p>

            <button type_="submit">
              "Apply" -> React.string
            </button>
          </footer>
        </form>
      </main>
    </div>
  </div>;
};
