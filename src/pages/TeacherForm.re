open Utils;
open Select;

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
  weekDay: int,
  from: int,
  to_: int,
};

[@react.component]
let make = () => {
  let (name, setName) = React.useState(_ => "");
  let (avatar, setAvatar) = React.useState(_ => "");
  let (whatsapp, setWhatsapp) = React.useState(_ => "");
  let (profile, setProfile) = React.useState(_ => "");
  let (cost, setCost) = React.useState(_ => "");
  let (subject, setSubject) = React.useState(_ => "");

  let handleChange = (handler, e) => {
    let value = ReactEvent.Form.target(e)##value;
    handler(_ => value);
  };

  let scheduleData = [|
    { weekDay: 0, from: 540, to_: 600 }
  |];

  let scheduleItems =
    scheduleData
    |> Array.map (s =>
      <div key=string_of_int(s.weekDay) className="schedule-item">
        <Select
          name="week_day"
          label="Week day"
          value=string_of_int(s.weekDay)
          onChange={_ => ()}
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
          // type="time"
          value=string_of_int(s.from)
          onChange={_ => ()}
        />

        <Input
          name="to"
          label="To"
          // type="time"
          value=string_of_int(s.to_)
          onChange={_ => ()}
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
        <form>
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
        </form>
      </main>
    </div>
  </div>;
};
