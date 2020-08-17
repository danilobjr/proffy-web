type t =
  | Success;

[@react.component]
let make = (~name) => {
  switch name {
  | Success =>
    <svg width="80" height="80" viewBox="0 0 80 80" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M53.3333 70H26.6667C17.4633 70 10 62.5367 10 53.3333V26.6667C10 17.4633 17.4633 10 26.6667 10H53.3333C62.5367 10 70 17.4633 70 26.6667V53.3333C70 62.5367 62.5367 70 53.3333 70Z" stroke="#04D361" strokeWidth="4" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M47.5563 36.6667L38.113 46.11L32.4463 40.4434" stroke="#04D361" strokeWidth="4" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  };
};
