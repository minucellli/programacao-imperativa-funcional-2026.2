1a) A principal diferença entre while e do-while está no momento em que a condição é testada. No while, a condição é verificada antes da execução do bloco. Portanto, o bloco pode executar zero vezes caso a condição seja falsa logo no início. No do-while, o bloco é executado primeiro e somente depois a condição é verificada. Por isso, o bloco executa pelo menos uma vez, mesmo que a condição seja inicialmente falsa.

b) for: é mais adequado quando sabemos ou conseguimos controlar facilmente a quantidade de repetições. É muito utilizado para percorrer intervalos, como de 1 até 100.
while: é adequado quando não sabemos previamente quantas vezes o laço será executado e a repetição depende de uma condição.
do-while: é adequado quando precisamos garantir que o código seja executado pelo menos uma vez, como em menus e validações de entrada.

c) while (condicao); não é erro de compilação. O ponto e vírgula representa um corpo vazio para o while. Se condicao for verdadeira, o programa ficará verificando a condição repetidamente sem executar nenhuma instrução dentro do laço. Se a condição nunca se tornar falsa, ocorrerá um laço infinito.