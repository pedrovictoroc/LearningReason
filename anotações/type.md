#  Notações

    No exemplo a seguir temos um exemplo de inferência, nós não explicitamos que "pontos" é um "int", mas o Reason deduz

        let pontos = 10;
    
    Mas podemos também escolher explicitar:
    
        let pontos: int = 10;
    
    Você pode também envelopar qualquer expressão em parêntenses e notar:

        let myInt1 = 5;
        let myInt2: int = 5;
        let myInt3 = (5: int) + (4: int);
        let add = (x: int, y: int): int => x + y
        let desenhaCirculo = (~raio as r: int) : string => "oi;
    
    Atente para o "(~raio as r: int)", que é um argumento rotulado (labeled) [https://reasonml.github.io/docs/en/function]

# Aliases

    Você pode se referir a um tipo com um nome diferente

        type scoreType = int;
        let x: scoreType = 10;
    
# Decisões de design da linguagem

    [https://reasonml.github.io/docs/en/type]

    O Sistema de Tipos do Reason tem algumas vantagens, como:

        1. Tipos podem ser inferidos

        2. Cada parte do Reason é 100% tipada

        3. Diferente de outras linguagens que usam um sistema de "Melhor esforço" e garantem 99.9% de confiança nos tipos e suas definições, Reason garante sempre 100% de confiança