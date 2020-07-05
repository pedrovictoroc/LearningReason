# Ligação com 'let'

    Em outras linguagens o "let binding" pode ser chamado de "declaração de variável". "Let" liga valores a um nome, esses podem ser acessados e referenciados no código posteriormente.

        1. Reason

            let boasVindas = "Oi!";
            let pontos = 10;
            let novaPontuacao = 10 + pontos;
        
        2. Saída

            var boasVindas = "Oi!";
            var pontos = 10;
            var novaPontuacao = 20;

# Escopo de Bloco

    Ligações podem ser feita em um determinado escopo delimitado por {...}

    1. Reason

        let mensagem = {
            let parte1 = "Olá";
            let parte2 = "mundo;

            parte1++ ", " ++ parte2;
        };

        /* parte1 e parte2 não são acessíveis aqui */
    
    2. Saída

        var mensagem = "Olá, mundo";

# Imutabilidade de ligações

    Ligações com "let" em Reason são imutáveis (não podem ser alteradas). Isso possibilita ao Sistema de Tipos do Reason deduzir e ser mais otimizado que outras linguagens 

# Ofuscamento de ligação (Binding Shadowing)

    Primeiro, vamos notar que, muitas vezes, o que você deseja fazer não é modificar o valor de uma variável, por exemplo:

        var result = 10;
        result = Math.random() + result;
        result = Math.floor(result);
    
    O que você realmente está fazendo é:

        var result1 = 10;
        var result2 = Math.random() + result1;
        var result3 = Math.floor(result2);
    
    Em todo caso, você pode "ofuscar" uma ligação em Reason da seguinte forma:

        1. Reason

            let result = 10.;
            let result = Js.Math.random() +. result;
            let result = Js.Math.floor_float(result);

        2. Saída
        
            var result = Math.random() + 10;
            var result$1 = Math.floor(result);
    
    A ligação que você se refere é a que está imediatamente acima. Sem mutações!

    Se você precisa de fato de mutações, veja em [https://reasonml.github.io/docs/pt-BR/mutation]