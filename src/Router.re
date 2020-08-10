open ReasonReactRouter;

type t =
  | Home
  | Learn
  | Teach;

let fromUrl = (url: ReasonReactRouter.url) =>
  switch (url.path) {
  | [] => Home -> Some
  | ["learn"] => Learn -> Some
  | ["teach"] => Teach -> Some
  | _ => None
  };

let toString = route =>
  switch route {
  | Home => "/"
  | Learn => "/learn"
  | Teach => "/teach"
  };

let useRoute = () => useUrl() -> fromUrl;
