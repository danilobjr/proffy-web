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

[@react.component]
let make = () => {
  let (name, setName) = React.useState(_ => "");
  let (avatar, setAvatar) = React.useState(_ => "");
  let (whatsapp, setWhatsapp) = React.useState(_ => "");
  let (bio, setBio) = React.useState(_ => "");

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
              name="bio"
              label="Biografia"
              value=bio
              onChange=handleChange(setBio)
            />
          </fieldset>
        </form>
      </main>
    </div>
  </div>;
};
