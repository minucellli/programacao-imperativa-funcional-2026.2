a)no incremento prefixado ++n, a variável é incrementada antes de seu valor ser utilizado. portanto, começando com n = 5, após ++n, n passa a ser 6 e x recebe 6. a saída será n = 6 e x = 6.

no incremento pós-fixado m++, o valor atual é utilizado antes do incremento. portanto, começando com m = 5, y recebe 5 e depois m passa a valer 6. A saída será m = 6 e y = 5.

b) A expressão printf("%d\t%d\t%d\n", n, n+1, n++); pode gerar comportamento indefinido porque n é utilizado e também modificado dentro da mesma chamada, sem uma ordem de avaliação que possa ser usada de forma segura pelo programador. por isso, o resultado pode variar dependendo do compilador