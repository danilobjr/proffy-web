[@react.component]
let make = (~href, ~children, ~className="") => {
  let handleClick = (e) => {
    let href = ReactEvent.Mouse.target(e)##href
    ReasonReactRouter.push(href)
  };

  <a
    className={className}
    href={href}
    onClick=handleClick
  >
    {children}
  </a>
}
