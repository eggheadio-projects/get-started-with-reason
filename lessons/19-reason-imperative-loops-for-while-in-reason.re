for (x in 2 to 8) {
  print_int(x);
  print_string(" ");
};
/* 2 3 4 5 6 7 8 - : unit = () */

for (x in 8 to 2) {
  print_int(x);
  print_string(" ");
};
/* - : unit = () */

for (x in 8 downto 2) {
  print_int(x);
  print_string(" ");
};
/* 8 7 6 5 4 3 2 - : unit = () */

let x = ref(0);

while (x^ < 5) {
  print_int(x^);
  x := x^ + 1;
};
/* 01234- : unit = () */