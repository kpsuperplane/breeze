Console.log("Running Test Program:");
let () = print_endline(Lib.Util.hello());

open Core;

let numbers = Map.of_alist_exn(
  (module Int),
  [(3, "three"), (4, "four")]
);

Console.log(Map.find(numbers, 3));