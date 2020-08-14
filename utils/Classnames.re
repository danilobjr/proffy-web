let rec append = classnames =>
  switch classnames {
  | [s, ...rest] => {
    append(rest)
    -> (++) (s ++ " ", _)
    -> String.trim;
    }
  | [] => ""
};

let on = (x, condition) => condition ? x : "";
