let rec append = classnames =>
  switch classnames {
  | [s, ...rest] => {
      let names = append(rest);
      s ++ " " ++ names;
    }
  | [] => ""
};

let on = (x, condition) => condition ? x : "";
