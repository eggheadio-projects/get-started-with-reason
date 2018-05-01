/**
 * ALERT
 * alert
 * Alert
 */

 let info = String.capitalize(String.lowercase("ALERT"));
 /* let info: string = "Alert"; */

 let info = "ALERT" |> String.lowercase |> String.capitalize;
 /* let info: string = "Alert"; */

 [8, 3, 6, 1]
  |> List.sort(compare)
  |> List.rev
  |> List.find(x => x < 4);
/* - : int = 3 */