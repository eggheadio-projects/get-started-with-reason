let foo = ref(5);

foo := 6;

foo;

foo^;

type game =
  | Menu
  | Playing
  | GameOver;

let store = ref(Playing);

store := GameOver;

store := Menu;
