(* Calculate mean using fold_left *)
let mean numbers =
  let sum = List.fold_left ( + ) 0 numbers in
  float_of_int sum /. float_of_int (List.length numbers)

(* Calculate median *)
let median numbers =
  let sorted = List.sort compare numbers in
  let length = List.length sorted in

  if length mod 2 = 0 then
    let first = List.nth sorted (length / 2 - 1) in
    let second = List.nth sorted (length / 2) in
    float_of_int (first + second) /. 2.0
  else
    float_of_int (List.nth sorted (length / 2))

(* Add or update a value in the frequency list *)
let rec add_count value counts =
  match counts with
  | [] -> [(value, 1)]
  | (x, count) :: rest ->
      if x = value then
        (x, count + 1) :: rest
      else
        (x, count) :: add_count value rest

(* Calculate modes *)
let mode numbers =
  let counts =
    List.fold_left
      (fun acc value -> add_count value acc)
      []
      numbers
  in

  let max_count =
    List.fold_left
      (fun max_value (_, count) -> max max_value count)
      0
      counts
  in

  counts
  |> List.filter (fun (_, count) -> count = max_count)
  |> List.map fst

let () =
  let numbers = [1; 2; 2; 3; 3; 4; 5; 6] in

  print_endline "OCaml Statistics Calculator";
  print_endline "---------------------------";

  print_string "Numbers: ";
  List.iter (fun x -> Printf.printf "%d " x) numbers;
  print_newline ();

  Printf.printf "Mean: %.2f\n" (mean numbers);
  Printf.printf "Median: %.2f\n" (median numbers);

  print_string "Mode(s): ";
  List.iter (fun x -> Printf.printf "%d " x) (mode numbers);
  print_newline ()
