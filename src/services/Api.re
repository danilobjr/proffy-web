type teacher = {
  id: int,
  avatar: string,
  bio: string,
  cost: float,
  name: string,
  subject: string,
  whatsapp: string,
};

let fetch = (resource, decoder, callback) =>
  Js.Promise.(
    // TODO put this base url into env var
    Fetch.fetch("http://localhost:9000" ++ resource)
    |> then_(Fetch.Response.json)
    |> then_(data => data |> decoder |> resolve)
    |> then_(result => callback(Ok(result)) |> resolve)
    |> catch(error => callback(Error(error)) |> resolve)
    |> ignore
  );

module Decode = {
  let teachers = json =>
    Json.Decode.{
      id: json |> field("id", int),
      avatar: json |> field("avatar", string),
      bio: json |> field("bio", string),
      cost: json |> field("cost", float),
      name: json |> field("name", string),
      subject: json |> field("subject", string),
      whatsapp: json |> field("whatsapp", string),
    };
};

module Teachers = {
  let fetch = (~subject="", ~weekDay="", ~time="", callback) =>
    fetch(
      "/lessons?subject=" ++ subject ++ "&week_day=" ++ weekDay ++ "&time=" ++ time,
      Decode.teachers,
      callback
    );
};
