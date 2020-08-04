[@react.component]
let make = (~href, ~children, ~className="") => {
  let handleClick = (e) => {
    ReactEvent.Mouse.preventDefault(e)
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
