open ReasonReactRouter;

type t =
  | Home
  | Learn
  | Login
  | Teach;

let fromUrl = (url: ReasonReactRouter.url) =>
  switch (url.path) {
  // TODO REVERT THIS ASA LOGIN IS DONE AND THERE IS A REDIRECTION TO IT
  // | [] => Home -> Some
  | [] => Login -> Some
  | ["learn"] => Learn -> Some
  | ["login"] => Login -> Some
  | ["teach"] => Teach -> Some
  | _ => None
  };

let toString = route =>
  switch route {
  | Home => "/"
  | Learn => "/learn"
  | Login => "/login"
  | Teach => "/teach"
  };

let useRoute = () => useUrl() -> fromUrl;
