module Styles = {
  open Css;
  let header =
    style([backgroundColor(hex("white")), marginBottom(px(16))]);
  let content =
    style([
      display(`flex),
      alignItems(`center),
      justifyContent(`spaceBetween),
      margin2(~v=px(0), ~h=`auto),
      maxWidth(px(1000)),
      padding2(~v=px(16), ~h=px(24)),
    ]);
  let h1 = style([margin(px(0))]);
  let link = style([color(black), textDecoration(none)]);
  let nav = style([]);
};

[@react.component]
let make = (~siteTitle) =>
  <header className=Styles.header>
    <div className=Styles.content>
      <h1 className=Styles.h1>
        <Gatsby.Link _to="/" className=Styles.link>
          {siteTitle |> ReasonReact.string}
        </Gatsby.Link>
      </h1>
      <nav className=Styles.nav>
        <a href="https://github.com/ppsreejith" className=Styles.link>
          {"Github" |> ReasonReact.string}
        </a>
      </nav>
    </div>
  </header>;

let default = make;
