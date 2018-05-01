/* Structural Equality */
2 == 2;
/* - : bool = true */

true == true;
/* - : bool = true */

("Hello", 2) == ("Hello", 2);
/* - : bool = true */

[1, 2, 3] == [1, 2, 3];
/* - : bool = true */

type person = {name: string, age: int};
/* - : bool = true */

{name: "Tim", age: 28} == {name: "Tim", age: 28};
/* - : bool = true */

(true, [{name: "Tim", age: 28}]) == (true, [{name: "Tim", age: 28}]);
/* - : bool = true */

(true, [{name: "Tim", age: 28}]) != (true, [{name: "Tim", age: 28}]);
/* - : bool = false */

2 != 2
/* - : bool = false */

2 != 3
/* - : bool = true */

/* Referential Equality */
{name : "Tim", age: 28} === {name : "Tim", age: 28};
/* - : bool = false */

let tim = {name : "Tim", age: 28};

tim === tim;
/* - : bool = true */

tim == tim;
/* - : bool = true */

tim == {name : "Tim", age: 28};
/* - : bool = true */

tim === {name : "Tim", age: 28};
/* - : bool = false */

24 === 24;
/* - : bool = true */
