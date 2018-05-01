let isMorning = true;

if (isMorning) {"Good Morning"} else {"Hello"};
/* - : string = "Good Morning" */

let greeting = if (isMorning) {"Good Morning"} else {"Hello"};

greeting;
/* - : string = "Good Morning" */

/* CAN'T DO */
let greeting = if (isMorning) {"Good Morning"};
/* Error: This expression has type string but an expression was expected of type unit */

if (isMorning) {print_endline("isMorning is set to true")};
/* 
  isMorning is set to true 
  - : unit = () 
*/

/* 
switch (<value>){
| <pattern1> => <case1>
| <pattern2> => <case2>
...
}
*/
let lamp = 
  switch(1) {
  | 0 => "off"
  | 1 => "on"
  }
lamp;
/* - : string = "on" */

let lamp = 
  switch(1003) {
  | 0 => "off"
  | 1 => "on"
  | _ => "off"
  }

let lamp = 
  switch(1003) {
  | 0 => "off"
  | 1 => "on"
  | other => {
    print_endline("Invalid value: " ++ string_of_int(other));
    "off";
    }
  }
  