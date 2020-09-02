let useToggle = (~initialValue = false, ()) => {
  let (active, setActive) = React.useState(() => initialValue);
  let toggle = () => setActive(previousValue => !previousValue);
  (active, toggle);
}
