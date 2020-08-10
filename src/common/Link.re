let push = (route: Router.t) =>
  route -> Router.toString -> ReasonReactRouter.push;

[@react.component]
let make = (~route: Router.t, ~children, ~className="") => {
  let href = route -> Router.toString;

  let handleClick = (e) => {
    let href = ReactEvent.Mouse.target(e)##href
    push(href)
  };

  <a
    className={className}
    href={href}
    onClick=handleClick
  >
    {children}
  </a>
};
