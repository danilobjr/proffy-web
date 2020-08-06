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
        </form>
      </main>
    </div>
  </div>;
};
