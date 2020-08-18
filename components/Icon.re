type iconName =
  | Back
  | Book
  | Check
  | Easel
  | Heart
  | HeartOutline
  | PageIndicator
  | PageIndicatorHighlight
  | Power
  | SeePassword;

[@react.component]
let make = (~name: iconName, ~onClick={_ => ()}) => {
  switch name {
  | Back =>
    <svg className="icon -back" onClick width="18" height="12" viewBox="0 0 18 12" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M0.999999 6H17" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M6.00098 11.001L0.999976 6.00002L6.00098 0.999023" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Book =>
    <svg className="icon -book" width="40" height="40" viewBox="0 0 40 40" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M5 5.99994H14C15.5913 5.99994 17.1174 6.65549 18.2426 7.82239C19.3679 8.98928 20 10.5719 20 12.2222V33.9999C20 32.7623 19.5259 31.5753 18.682 30.7001C17.8381 29.8249 16.6935 29.3333 15.5 29.3333H5V5.99994Z" stroke="white" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M35 5.99994H26C24.4087 5.99994 22.8826 6.65549 21.7574 7.82239C20.6321 8.98928 20 10.5719 20 12.2222V33.9999C20 32.7623 20.4741 31.5753 21.318 30.7001C22.1619 29.8249 23.3065 29.3333 24.5 29.3333H35V5.99994Z" stroke="white" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Check =>
    <svg className="icon -check" width="10" height="7" viewBox="0 0 10 7" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M9 1L4.00022 6L1 2.99965" stroke="white" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round" />
    </svg>
  | Easel =>
    <svg className="icon -easel" width="40" height="40" viewBox="0 0 40 40" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M33.75 6.25H6.25C4.86929 6.25 3.75 7.36929 3.75 8.75V25C3.75 26.3807 4.86929 27.5 6.25 27.5H33.75C35.1307 27.5 36.25 26.3807 36.25 25V8.75C36.25 7.36929 35.1307 6.25 33.75 6.25Z" stroke="white" strokeWidth="3" strokeLinejoin="round"/>
      <path d="M20 32.5V27.5" stroke="white" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M20 6.25V3.75" stroke="white" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M31.25 36.25L28.75 27.5" stroke="white" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M8.75 36.25L11.25 27.5" stroke="white" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Heart =>
    <svg className="icon -heart" width="20" height="18" viewBox="0 0 20 18" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M13.6995 1C16.8695 1 18.9995 3.98 18.9995 6.76C18.9995 12.39 10.1596 17 9.99956 17C9.83956 17 0.999634 12.39 0.999634 6.76C0.999634 3.98 3.12962 1 6.29959 1C8.11957 1 9.30956 1.91 9.99956 2.71C10.6896 1.91 11.8795 1 13.6995 1Z" fill="#8257E5" stroke="#8257E5" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | HeartOutline =>
    <svg width="20" height="18" viewBox="0 0 20 18" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M13.6995 1C16.8695 1 18.9995 3.98 18.9995 6.76C18.9995 12.39 10.1596 17 9.99956 17C9.83956 17 0.999634 12.39 0.999634 6.76C0.999634 3.98 3.12962 1 6.29959 1C8.11957 1 9.30956 1.91 9.99956 2.71C10.6896 1.91 11.8795 1 13.6995 1Z" stroke="white" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | PageIndicator =>
    <svg className="icon -page-indicator" width="4" height="4" viewBox="0 0 4 4" fill="none" xmlns="http://www.w3.org/2000/svg">
      <circle cx="2" cy="2" r="2" fill="#C1BCCC"/>
    </svg>
  | PageIndicatorHighlight =>
    <svg className="icon -page-indicator-highlight" width="6" height="6" viewBox="0 0 6 6" fill="none" xmlns="http://www.w3.org/2000/svg">
      <circle cx="3" cy="3" r="3" fill="#8257E5"/>
    </svg>
  | Power =>
    <svg width="20" height="20" viewBox="0 0 20 20" fill="none" xmlns="http://www.w3.org/2000/svg">
      <path d="M15.3 5.53333C16.3487 6.58232 17.0627 7.91869 17.3519 9.37348C17.6411 10.8283 17.4924 12.3361 16.9247 13.7065C16.357 15.0768 15.3957 16.2479 14.1624 17.072C12.9291 17.896 11.4791 18.3358 9.99585 18.3358C8.5126 18.3358 7.06265 17.896 5.82933 17.072C4.59602 16.2479 3.63472 15.0768 3.06699 13.7065C2.49926 12.3361 2.35059 10.8283 2.63978 9.37348C2.92897 7.91869 3.64304 6.58232 4.69169 5.53333" stroke="#D4C2FF" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M10 1.66667V10" stroke="#D4C2FF" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | SeePassword =>
    <svg className="icon -see-password" xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none">
      <path d="M14.122 9.87999C15.293 11.051 15.293 12.952 14.122 14.125C12.951 15.296 11.05 15.296 9.877 14.125C8.706 12.954 8.706 11.053 9.877 9.87999C11.05 8.70699 12.95 8.70699 14.122 9.87999Z" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M3 12C3 11.341 3.152 10.689 3.446 10.088C4.961 6.991 8.309 5 12 5C15.691 5 19.039 6.991 20.554 10.088C20.848 10.689 21 11.341 21 12C21 12.659 20.848 13.311 20.554 13.912C19.039 17.009 15.691 19 12 19C8.309 19 4.961 17.009 3.446 13.912C3.152 13.311 3 12.659 3 12V12Z" stroke="#9C98A6" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  };
};
