{ 42; }

{
  print_endline("Hello");
  42;
}

42;

let x = 2;

{ 40 + x; };
/* - : int = 42 */

{
  let y = 2;
  40 + y;
};
/* - : int = 42 */
y;
/* Error: Unbound value y */

let foo = "Hello";
{
  let foo = 2
  foo;
}
foo;
/* - : string = "Hello" */

let meaningOfLife = {
  let a = 40;
  let b = 1;
  a + b + 1;
}
meaningOfLife;
/* - : int = 42 */