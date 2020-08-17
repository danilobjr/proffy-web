type t =
  | Back
  | Check
  | PageIndicator
  | PageIndicatorHighlight
  | SeePassword;

[@react.component]
let make = (~name) => {
  switch name {
  | Back =>
    <svg className="icon -back" width="18" height="12" viewBox="0 0 18 12" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M0.999999 6H17" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M6.00098 11.001L0.999976 6.00002L6.00098 0.999023" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Check =>
    <svg className="icon -check" width="10" height="7" viewBox="0 0 10 7" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M9 1L4.00022 6L1 2.99965" stroke="white" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round" />
    </svg>
  | PageIndicator =>
    <svg className="icon -page-indicator" width="4" height="4" viewBox="0 0 4 4" fill="none" xmlns="http://www.w3.org/2000/svg">
      <circle cx="2" cy="2" r="2" fill="#C1BCCC"/>
    </svg>
  | PageIndicatorHighlight =>
    <svg className="icon -page-indicator-highlight" width="6" height="6" viewBox="0 0 6 6" fill="none" xmlns="http://www.w3.org/2000/svg">
      <circle cx="3" cy="3" r="3" fill="#8257E5"/>
    </svg>
  | SeePassword =>
    <svg className="icon -see-password" xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none">
      <path d="M14.122 9.87999C15.293 11.051 15.293 12.952 14.122 14.125C12.951 15.296 11.05 15.296 9.877 14.125C8.706 12.954 8.706 11.053 9.877 9.87999C11.05 8.70699 12.95 8.70699 14.122 9.87999Z" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M3 12C3 11.341 3.152 10.689 3.446 10.088C4.961 6.991 8.309 5 12 5C15.691 5 19.039 6.991 20.554 10.088C20.848 10.689 21 11.341 21 12C21 12.659 20.848 13.311 20.554 13.912C19.039 17.009 15.691 19 12 19C8.309 19 4.961 17.009 3.446 13.912C3.152 13.311 3 12.659 3 12V12Z" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  };
};
