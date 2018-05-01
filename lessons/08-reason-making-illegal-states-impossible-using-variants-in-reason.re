/* 
loading => "Loading..."
success => "Your name is <name>"
error => "Something went wrong"
*/

type request = {
  loading: bool,
  error: bool,
  name: string,
};

if (myRequest.loading) {
  "Loading...";
} else if (myRequest.error) {
  "Something went wrong.";
} else {
  "Your name is " ++ myRequest.name;
};

let myRequest = {
  loading: true,
  error: false,
  name: "",
};
/* - : string = "Loading..."  */

let myRequest = {
  loading: false,
  error: true,
  name: "",
};
/* - : srting = "Something went wrong." */

let myRequest = {
  loading: false,
  error: false,
  name: "Anna",
};
/* - : srting = "Your name is Anna" */

let myRequest = {
  loading: true,
  error: true,
  name: "",
};
/* State should not happen. */
/* - : string = "Loading..."  */

let myRequest = {
  loading: false,
  error: false,
  name: "",
};
/* State should not happen. */
/* - : string = ""Your name is " */

type request = 
  | Loading
  | Error
  | Succes(string)

let state = Loading;
/* let state: request = Loading; */

let ui =
  switch (state) {
  | Loading => "Loading..."
  | Error => "Something went wrong"
  | Success("") => "Your name is missing"
  | Success(name) => "Your name is " ++ myRequest.name;
  };

type userResponse = {
  id: string,
  name: string,
  age: ing,
};

type request = 
  | Loading
  | Error
  | Success(userResponse);

let state = Success({id: "abc", name: "Anna", age: 42 });
/* let state: request = Success({id: "abc", name: "Anna", age: 42 }) */