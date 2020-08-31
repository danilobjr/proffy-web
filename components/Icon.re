open Classnames;

type iconName =
  | Back
  | Book
  | CaretDown
  | Check
  | Easel
  | Filter
  | Heart
  | HeartOutline
  | PageIndicator
  | PageIndicatorHighlight
  | Power
  | SeePassword
  | Whatsapp;

[@react.component]
let make = (~className="", ~name: iconName, ~onClick={_ => ()}) => {
  switch name {
  | Back =>
    <svg className=append(["icon -back", className]) width="18" height="12" fill="none" viewBox="0 0 18 12" xmlns="http://www.w3.org/2000/svg" onClick>
      <path d="M0.999999 6H17" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M6.00098 11.001L0.999976 6.00002L6.00098 0.999023" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Book =>
    <svg className=append(["icon -book", className]) width="40" height="40" fill="none" viewBox="0 0 40 40" xmlns="http://www.w3.org/2000/svg">
      <path d="M5 5.99994H14C15.5913 5.99994 17.1174 6.65549 18.2426 7.82239C19.3679 8.98928 20 10.5719 20 12.2222V33.9999C20 32.7623 19.5259 31.5753 18.682 30.7001C17.8381 29.8249 16.6935 29.3333 15.5 29.3333H5V5.99994Z" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M35 5.99994H26C24.4087 5.99994 22.8826 6.65549 21.7574 7.82239C20.6321 8.98928 20 10.5719 20 12.2222V33.9999C20 32.7623 20.4741 31.5753 21.318 30.7001C22.1619 29.8249 23.3065 29.3333 24.5 29.3333H35V5.99994Z" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | CaretDown =>
    <svg className=append(["icon -caret-down", className]) width="10" height="6" fill="none" viewBox="0 0 10 6" xmlns="http://www.w3.org/2000/svg">
      <path d="M1 1L5 5L9 1" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Check =>
    <svg className=append(["icon -check", className]) width="10" height="7" fill="none" viewBox="0 0 10 7" xmlns="http://www.w3.org/2000/svg">
      <path d="M9 1L4.00022 6L1 2.99965" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round" />
    </svg>
  | Easel =>
    <svg className=append(["icon -easel", className]) width="24" height="24" fill="none" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg">
      <path d="M20.25 3.75H3.75C2.92157 3.75 2.25 4.42157 2.25 5.25V15C2.25 15.8284 2.92157 16.5 3.75 16.5H20.25C21.0784 16.5 21.75 15.8284 21.75 15V5.25C21.75 4.42157 21.0784 3.75 20.25 3.75Z" strokeWidth="1.5" strokeLinejoin="round"/>
      <path d="M12 19.5V16.5" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M12 3.75V2.25" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M18.75 21.75L17.25 16.5" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M5.25 21.75L6.75 16.5" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Filter =>
    <svg className=append(["icon filter", className]) width="18" height="19" fill="none" viewBox="0 0 18 19" xmlns="http://www.w3.org/2000/svg">
      <path d="M11.5 10.5L16.707 5.293C16.895 5.105 17 4.851 17 4.586V2C17 1.448 16.552 1 16 1H2C1.448 1 1 1.448 1 2V4.586C1 4.851 1.105 5.106 1.293 5.293L6.5 10.5" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M6.5 10.5V16.749C6.5 17.562 7.264 18.159 8.053 17.962L10.553 17.337C11.109 17.198 11.5 16.698 11.5 16.124V10.5" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Heart =>
    <svg className=append(["icon -heart", className]) width="20" height="18" fill="none" viewBox="0 0 20 18" xmlns="http://www.w3.org/2000/svg">
      <path d="M13.6995 1C16.8695 1 18.9995 3.98 18.9995 6.76C18.9995 12.39 10.1596 17 9.99956 17C9.83956 17 0.999634 12.39 0.999634 6.76C0.999634 3.98 3.12962 1 6.29959 1C8.11957 1 9.30956 1.91 9.99956 2.71C10.6896 1.91 11.8795 1 13.6995 1Z" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | HeartOutline =>
    <svg className=append(["icon -heart-outline", className]) width="20" height="18" fill="none" viewBox="0 0 20 18" xmlns="http://www.w3.org/2000/svg">
      <path d="M13.6995 1C16.8695 1 18.9995 3.98 18.9995 6.76C18.9995 12.39 10.1596 17 9.99956 17C9.83956 17 0.999634 12.39 0.999634 6.76C0.999634 3.98 3.12962 1 6.29959 1C8.11957 1 9.30956 1.91 9.99956 2.71C10.6896 1.91 11.8795 1 13.6995 1Z" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | PageIndicator =>
    <svg className=append(["icon -page-indicator", className]) width="4" height="4" fill="none" viewBox="0 0 4 4" xmlns="http://www.w3.org/2000/svg">
      <circle cx="2" cy="2" r="2" />
    </svg>
  | PageIndicatorHighlight =>
    <svg className=append(["icon -page-indicator-highlight", className]) width="6" height="6" fill="none" viewBox="0 0 6 6" xmlns="http://www.w3.org/2000/svg">
      <circle cx="3" cy="3" r="3" />
    </svg>
  | Power =>
    <svg className=append(["icon -power", className]) width="20" height="20" fill="none" viewBox="0 0 20 20" xmlns="http://www.w3.org/2000/svg">
      <path d="M15.3 5.53333C16.3487 6.58232 17.0627 7.91869 17.3519 9.37348C17.6411 10.8283 17.4924 12.3361 16.9247 13.7065C16.357 15.0768 15.3957 16.2479 14.1624 17.072C12.9291 17.896 11.4791 18.3358 9.99585 18.3358C8.5126 18.3358 7.06265 17.896 5.82933 17.072C4.59602 16.2479 3.63472 15.0768 3.06699 13.7065C2.49926 12.3361 2.35059 10.8283 2.63978 9.37348C2.92897 7.91869 3.64304 6.58232 4.69169 5.53333" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M10 1.66667V10" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | SeePassword =>
    <svg className=append(["icon -see-password", className]) width="24" height="24" fill="none" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg">
      <path d="M14.122 9.87999C15.293 11.051 15.293 12.952 14.122 14.125C12.951 15.296 11.05 15.296 9.877 14.125C8.706 12.954 8.706 11.053 9.877 9.87999C11.05 8.70699 12.95 8.70699 14.122 9.87999Z" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
      <path d="M3 12C3 11.341 3.152 10.689 3.446 10.088C4.961 6.991 8.309 5 12 5C15.691 5 19.039 6.991 20.554 10.088C20.848 10.689 21 11.341 21 12C21 12.659 20.848 13.311 20.554 13.912C19.039 17.009 15.691 19 12 19C8.309 19 4.961 17.009 3.446 13.912C3.152 13.311 3 12.659 3 12V12Z" strokeWidth="1.5" strokeLinecap="round" strokeLinejoin="round"/>
    </svg>
  | Whatsapp =>
    <svg className=append(["icon -whatsapp", className]) width="20" height="20" fill="none" viewBox="0 0 20 20" xmlns="http://www.w3.org/2000/svg">
      <g clipPath="url(#clip0)">
        <path d="M10.0018 0H9.99677C4.48302 0 -0.000732422 4.485 -0.000732422 10C-0.000732422 12.1875 0.704268 14.215 1.90302 15.8612L0.656768 19.5763L4.50052 18.3475C6.08177 19.395 7.96802 20 10.0018 20C15.5155 20 19.9993 15.5138 19.9993 10C19.9993 4.48625 15.5155 0 10.0018 0Z" />
        <path d="M15.8203 14.1212C15.5791 14.8025 14.6216 15.3675 13.8578 15.5325C13.3353 15.6437 12.6528 15.7325 10.3553 14.78C7.41659 13.5625 5.52409 10.5762 5.37659 10.3825C5.23534 10.1887 4.18909 8.80123 4.18909 7.36623C4.18909 5.93123 4.91784 5.23248 5.21159 4.93248C5.45284 4.68623 5.85159 4.57373 6.23409 4.57373C6.35784 4.57373 6.46909 4.57998 6.56909 4.58498C6.86284 4.59748 7.01034 4.61498 7.20409 5.07873C7.44534 5.65998 8.03284 7.09498 8.10284 7.24248C8.17409 7.38998 8.24534 7.58998 8.14534 7.78373C8.05159 7.98373 7.96909 8.07248 7.82159 8.24248C7.67409 8.41248 7.53409 8.54248 7.38659 8.72498C7.25159 8.88373 7.09909 9.05373 7.26909 9.34748C7.43909 9.63498 8.02659 10.5937 8.89159 11.3637C10.0078 12.3575 10.9128 12.675 11.2366 12.81C11.4778 12.91 11.7653 12.8862 11.9416 12.6987C12.1653 12.4575 12.4416 12.0575 12.7228 11.6637C12.9228 11.3812 13.1753 11.3462 13.4403 11.4462C13.7103 11.54 15.1391 12.2462 15.4328 12.3925C15.7266 12.54 15.9203 12.61 15.9916 12.7337C16.0616 12.8575 16.0616 13.4387 15.8203 14.1212Z" />
      </g>
      <defs>
        <clipPath id="clip0">
        <rect width="20" height="20" transform="translate(-0.000732422)"/>
        </clipPath>
      </defs>
    </svg>
  };
};
