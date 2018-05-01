("Anna", 24);
/* - : (string, int) = ("Anna", 24) */

(42, true, false, "foo");
/* - : (int, bool, bool, string) = (42, true, false, "foo") */

((4, 3), 32);
/* - : ((int, int), int) = ((4, 3), 32) */

type point = (int, int);

let myPoint: point = (4, 3);

fst((0,2));
/* - : int = 0 */
snd((0,2));
/* - : int = 2 */
snd(myPoint);
/* - : int = 3 */

let (x, y, z) = (1, 2, 3);

z;
/* - : int = 3 */

let anotherPoint = (fst(myPoint), 6);
/* let anotherPoint: (int, int) = (4, 6); */

let myList = [1, 2, 3];

[2, "Hello"];
/* Error: This expression has type string but an expression was expected of type int */

type item = 
  | Measurement(int)
  | Note(string);

  [Measurement(2), Note("Hello")];
  /* - : list(item) = [Measurement(2), Note("Hello")] */

  List.append([1, 2, 3], [4, 5]);
  /* - : list(int) = [1, 2, 3, 4, 5] */

  [1, 2] @ [3, 4];
  /* - : list(int) = [1, 2, 3, 4] */

  [0, ...[1, 2, 3]];
  /* - : list = [0, 1, 2, 3] */

  [...[1, 2, 3], 4];
  /* Error: Syntax error */

  let myList = [2, 3];

  let message = 
    switch (myList) {
    | [] => "This list is empty"
    | [head, ...rest] => "The head of the list is " ++ string_of_int(head)
    };
/* let message: string = "The head of the list is 2"; */

List.nth([2, 3], 0);
/* - : int = 2 */

List.nth([], 0);
/* Exception: Failure("nth") */

List.map(x => x + 1, [2, 3]);
/* - : list(int) = [3, 4] */

let myArray = [|2, 3|];
/* let myArray: array(int) = [|2,3|] */

Array.map(x => x + 1, [|2, 3|]);
/* - : array(int) = [|3, 4|] */