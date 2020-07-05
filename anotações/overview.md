# Tipos internos

## Integer

    let x: int = 100;

## Float

    let x: float = 23.2;

## Boolean

    let x: bool = false;

## String

    let x: string = "string";

## Char

    let x: char = 'c';

## Unit

    let x: unit = ();

## Option

    let x: option(int) = some(19);

## Tuple

    let x: (int, string) = (10, "ten");

## List

    let x: list(int) = [1,2,3,4];

## Array

    /* Mutable */
    let x: array(int) = [|1,2,3|];

## Function

    let x: (int, int) => (int) = (a,b) => a + b;

# Tipos genéricos

    Tipos podem ser tornados genéricos com "type parameters"

    1. type pair('a, 'b) = ('a, 'b);
    2. let x: pair(int, string) = (10, "ten);
    3. let x: list(string) = ["It", "works!"];

# Pattern Matching

    "Combinação de padrões" é um mecanismo poderoso. Ele faz combinações entre padrões e garante que todos os casos estão cobertos

        switch(foo){
            |Some(value) => doSomething(value)
            |None => error()
        }

# Refs

    Refs são a forma de termos "variáveis" mutáveis. É um wrapper ao redor de um registro com um campo de mutável chamado "contents"

        // Declaração
        1. let x = ref(18) 
                ou 
           let x = {contents: 18}

        // Acesso
        2.  x^ ou x.contents

        // Atualização
        3. x.contents = 20
            ou
           x := 20

# Loops

    1. while (condition) {...}
    2. for (i in 0 to 9 ) {...}
    3. for (i in 9 downto to 0) {...}