[@react.component]
let default = () => {
  let router = Next.useRouter();

  React.useEffect(() => {
    router -> Next.Router.push(~url="/login", ());
    None;
  });

  React.null;
};
