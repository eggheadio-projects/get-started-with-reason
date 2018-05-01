(x) => x + 1;
/* - : int => int = <fun> */

let plusOne = x => x + 1;

plusOne(4);
/* - : int = 5 */

let add = (x: int, y: int) : int => x + y;

add(1, 3);

let add = (x, y) => {
  let z = float_of_int(x);
  y +. z;
};
/* let add: (int, float) => float = <fun>; */

let add = (x, y) => x + y;
add(3, 2);
/* - : int = 5; */

add(3)
/* - : int => int = <fun> */

let addThree = add(3);
addThree(2);
/* - : int = 5; */

add(3)(2);
/* - : int = 5; */

let numbers = [4, 11, 5];

let add = (x, y) => x + y;

List.map(x => add(4, x), numbers);
/* - : list(int) = [8, 15, 9] */

List.map(add(4), numbers);
/* - : list(int) = [8, 15, 9]  */

let name = (~firstName, ~lastName) => firstName ++ " " ++ lastName;
name(~firstName="Jane", ~lastName="Doe");
/* - : string = Jane Doe */
name(~lastName="Doe")(~firstName="Jane");
/* - : string = Jane Doe */

let name = (~firstName, ~middleName, ~lastName) => {
  firstName ++ " " ++ middleName ++ " " ++ lastName;
};
name(~firstName="Jane", ~middleName="Kim" ~lastName="Doe");
/* - : string = Jane Kim Doe */

name(~firstName="Jane", ~lastName="Doe");
/* - : (~middleName: string=?) => string = <fun> */

let name = (~firstName, ~middleName="Francis", ~lastName, ()) => {
  firstName ++ " " ++ middleName ++ " " ++ lastName;
};
name(~firstName="Jane", ~lastName="Doe", ());
/* - : string = Jane Kim Doe */

let name = (~firstName, ~middleName=?, ~lastName, ()) => {
  switch (middleName) {
  | Some(value) => firstName ++ " " ++ middleName ++ " " ++ lastName;
  | None => firstName ++ " " ++ lastName
  };
};

let someName = Some("Francis");
let name = (~firstName, ~middleName=?someName, ~lastName, ())
/* Jane Francis Doe */

let name = (~firstName, ~lastName) => firstName ++ " " ++ lastName;
name("Jane", "Doe");
/* - : string = "Jane Doe" */

let hello = (()) => "Hello!";
/* let hello: unit => string = <fun> */

let hello = () => "Hello!";
/* let hello: unit => string = <fun> */