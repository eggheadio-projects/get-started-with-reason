type intCoordinate = (int, int);

type floatCoordinate = (float, float);

let locationOne: intCoordinate = (10, 20);

type coordinate('a) = ('a, 'a);

let locationOne: coordinate(int) = (10, 20);

let locationTwo: coordinate(float) = (10.5, 20.2);

type ourOption('a) = 
  | OurNone
  | OurSome('a);

OurSome(42);
/* - : ourOption(int) = OurSome(42) */

OurSome("Vienna");
/* - : ourOption(string) = OurSome("Vienna") */

type ship('a, 'b) = {
  id: 'a,
  cargo: 'b,
};

{id: 223, cargo: ["Apples"]};
/* - : ship (int, list(string)) = {id: 223, cargo: ["Apples"]} */