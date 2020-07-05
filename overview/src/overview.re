/*
//Testando o uso de Ref
let y = ref(2)

y := 6

Js.log(y)
*/

//Testando Functores

module type Stringable = {
    type t;
    let toString: (t) => string;
};

module Printer = (Item: Stringable) => {
    let print = (t: Item.t) => {
        print_endline(Item.toString(t));
    };

    let printList = (list: list(Item.t)) => {
        list
        |> List.map(Item.toString)
        |> String.concat(", ")
        |> print_endline;
    }
};

module IntPrinter = Printer({
    type t = int;
    let toString = string_of_int;
});

IntPrinter.print(30)
IntPrinter.printList([13, 12, 11])