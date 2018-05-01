List.find(x => x == 42, []);
/* Exception: Not_found. */

raise(Not_found);
/* Exception: Not_found. */

try (raise(Not_found)) {
| Not_found => ":("
};
/* - : string = ":(" */

switch (List.find(x => x == 42, [])) {
| item => "Found it"
| exception Not_found => "Not found"
};
/* - : string = "Not found" */

switch (List.find(x => x == 42, [42])) {
  | item => "Found it"
  | exception Not_found => "Not found"
  };
  /* - : string = "Found it" */
  
  