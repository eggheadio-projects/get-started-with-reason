null;
/* Error: Unbound value null */

None;
/* - : option('a) = None */

Some(42);
/* - : option(int) = Some(42) */

Some("Hello World");
/* - : option(string) = Some("Hello World") */

let meaningOfLife = None;
/* let meaningOfLife: option('a) = None */

let meaningOfLife = Some("42");
/* let meaningOfLife: option(string) = Some("42") */

let message = 
  switch (meaningOfLife) {
  | None => "Sadly I don't know"
  | Some(value) => "The meaning of life is: " ++ value
  };

  