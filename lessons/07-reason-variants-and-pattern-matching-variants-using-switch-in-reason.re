type answer = 
  | Yes
  | No
  | Maybe;
/* type answer = Yes | No | Maybe; */

let isReasonGreat = Yes;
/* let isReasonGreat: answer = Yes; */

let isItRaning = Maybe;
/* let isItRaining: answer = Maybe; */

let message = 
  switch (isReasonGreat) {
  | Yes => "Yay"
  | No => "No worries"
  | Maybe => "You better keep watching :)"
  };
/* let message: string = "Yay; */

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

switch (myItem) {
| Note(text) => text
| Todo("redesign website", false) => "Please first fix the app"
| Todo(text, checked) => text ++ "is done: " ++ string_of_bool(checked)
};
/* - : string = "Please first fix the app" */