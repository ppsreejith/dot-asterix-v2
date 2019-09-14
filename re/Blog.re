let str = React.string;

type post = {
  .
  "id": string,
  "excerpt": string,
  "frontmatter": {
    .
    title: string,
    date: string,
  },
};

[@react.component]
let make = (~posts) => {
  let renderPosts =
    posts |> Array.map(post => <Post key=post##id post />) |> React.array;
  <div> renderPosts </div>;
};

let default = make;
