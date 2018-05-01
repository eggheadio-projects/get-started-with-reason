switch("Hello") {
| "Hello" => "English"
| "Bonjour" => "French"
| _ => "Unknown"
};
/* - : string = "English" */

let myTodo = ("redesign website", false);

switch (myTodo) {
| ("redesign website", true) => "Congrats"
| ("redesign website", false) => "Too bad"
};
/* Warning 8: this pattern-matching is not exhaustive. Here is an example of a value that is not matched: ("", _) */
/* - :string = "Too bad" */

switch (myTodo) {
| (_, true) => "Congrats"
| (_, false) => "Too bad"
};
/* - :string = "Too bad" */

switch (myTodo) {
| (_, true) => "Congrats"
| (text, false) => "Too bad, you didn't finish: " ++ text
};
/* - :string = "Too bad, you didn't finish: redesign website" */

switch (["a", "b", "c"]) {
| ["a", "b", "c"] => true
| _ => false
};
/* - : bool = true */

switch (["a", "b", "c"]) {
| ["a", "b", "c"] => true
| _ => false
};
/* - : bool = true */

switch (["hello", "b", "c"]) {
| [_, "b", "c"] => true
| _ => false
};
/* - : bool = true */

switch (["a", "b", "c"]) {
| [head, ...tail] => print_endline(head)
| [] => print_endline("Empty list")
};
/* - : unit = () */

switch ([|"a", "b", "c"|]) {
| [|"a", "b", _|] => print_endline("a, b and something")
| [|_, "x", "y"|] => print_endline("something, " ++ x ++ y)
| _ => print_endline("An Array")
};
/* 
  something and foo c
  - : unit = ()
*/

type todo = {
  text: string,
  checked: bool,
};

let myTodo = {
  text: "redesign website",
  checked: true,
};

switch (myTodo) {
| {text, checked: true} => "Congrats, you finished: " ++ text
| {text, checked: false} => "Too bad, you didn't finish: " ++ text
}
/* - : string = "Congrats, you finished: redesign website" */

type item = 
  | Note(string)
  | Todo(string, bool);

let myItem = Todo("redesign website", false);
/* let myItem: item =  Todo("redesign website", false); */

switch (myItem) {
| Note(text) => text
| Todo(text, checked) => text ++ "is done: " ++ string_of_bool(checked)
};
/* - : string = "redesign website is down: false" */

type request = 
  | Success(string)
  | Error(int);

switch (Error(502)) {
| Success(result) => result
| Error(500 | 501 | 502) => "A server error occurred."
| Error(code) => "Unkown error occured. Code: " ++ string_of_int(code)
};
/* - : string = "A server error occured" */

let isServerError = code => code >= 500 && code <= 511;

switch (Error(502)) {
  | Success(result) => result
  | Error(code) when isServerError(code) => "A server error occurred."
  | Error(code) => "Unkown error occured. Code: " ++ string_of_int(code)
  };
  /* - : string = "A server error occured" */

  let isMorning = true;

  let message = isMorning ? "Good monring" : "Hello";
  