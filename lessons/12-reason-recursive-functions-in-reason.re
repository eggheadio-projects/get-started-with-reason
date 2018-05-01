let countUntilTen = x => {
  if (x < 10) {
    print_int(x)
    countUntilTen(x + 1);
  };
};
/* Error: Unbound value countUntilTen */

let rec countUntilTen = x => {
  if (x < 10) {
    print_int(x)
    countUntilTen(x + 1);
  };
};

countUntilTen(6);
/* 6789- : unit = () */

let rec odd = x => ! even(x)
and even = x => {
  if(x == 0) {
    true;
  } else {
    odd(x - 1);
  };
};

even(2);
/* - : bool = true */