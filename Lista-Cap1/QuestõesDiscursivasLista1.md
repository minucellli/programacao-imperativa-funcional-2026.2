==========Questão 5==========
não, pela perspectiva do padrão ANSI C, o programa não tá completo pra compilação e execução imediata, pois faltam alguns elementos importantes pra que o compilador reconheça corretamente as funções utilizadas

coisas erradas ou que faltam:
está faltando o #include <stdio.h>, que é necessário para a função printf().
e o #include <stdlib.h>, que vai declarar a função system().
além de que é necessário declarar a função principal como int main() e finalizar com return 0;

==========Questão 6==========
o primeiro erro está na declaração de variávies, onde a está como inteiro, mas b e c não são declaradas corretamente
além disso, foi utilizado dois-pontos : ao final da declaração, mas devia ser utilizado ponto e vírgula ;
a string do printf() não foi delimitada corretamente pelas aspas e os especificadores %d e as variáveis que deveriam ser utilizadas como argumentos ficaram incorretos. além de aparecer uma variável d, mas ela não foi declarada no programa

==========Questão 7==========
Primeira saída:         Bom dia! Shirley.

Segunda saída: Você já tomou café? 

Terceira saída: 


A solução não existe!
Não insista.

Quarta saída:
Duas    linhas    de    saída
ou      uma?

Quinta saída:
um
dois
três
==========Questão 8==========
o programa utiliza as sequências de escape \n, \t e \". o \n provoca uma quebra de linha antes do texto, o \t adiciona uma tabulação e o \" permite que sejam exibidas aspas duplas. então a saída vai ser uma linha em branco e, na linha seguinte, haverá uma tabulação seguida de "Primeiro programa". depois, o comando system("PAUSE") pausa a execução do programa até que o usuário pressione uma tecla

==========Questão 9==========
o programa utiliza o especificador %c, que serve para imprimir um único caractere. no primeiro printf, '\n' representa uma quebra de linha, '\t' representa uma tabulação e '\"' representa uma aspa dupla. então vai ser impressa uma linha em branco, seguida de uma tabulação e do texto "Primeiro programa. mas tem um erro no segundo printf, pois printf("%c", "\"") passa uma string para %c, que espera um único caractere

==========Questão 10==========
resposta: b) Verdadeiro
a linguagem C é case sensitive, ela diferencia letras maiúsculas de letras minúsculas. então os identificadores peso, Peso e PESO são considerados diferentes e podem representar três variáveis distintas. assim, alterar a forma das letras no nome de uma variável também altera o identificador reconhecido pelo programa

==========Questão 11==========
\r	      Sequência de escape	                                    char
2130	  Constante inteira decimal	                                int
-123	  Constante inteira decimal	                                int
33.28	  Constante de ponto flutuante	                            double
0XFA	  Constante inteira hexadecimal	                            int
0101	  Constante inteira octal	                                int
2.0e30	  Constante de ponto flutuante em notação científica	    double
\xDC	  Sequência de escape hexadecimal	                        char
'\"'	  Constante de caractere	                                char
'\\'	  Constante de caractere	                                char
'F'	      Constante de caractere	                                char
0	      Constante inteira decimal	                                int
'\0'	  Constante de caractere / sequência de escape	            char
"F"	      Constante string	                                        char[]
-4567.89  Constante de ponto flutuante	                            double

==========Questão 12==========
a) int a; Correto
b) float b; Correto
c) double float c; Incorreto; double e float são tipos diferentes e não podem ser usados juntos dessa forma em uma declaração
d) unsigned char d; Correto
e) unsigned e; Correto
f) long float f; Incorreto; long float não é uma combinação de tipos válida em C padrão.para ponto flutuante,utiliza float, double ou long double
g) long g; Correto
h) long double h; Correto

==========Questão 13==========
c)são arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos

==========Questão 14==========
a)instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte

==========Questão 15==========
c) Uma diretiva especial para o pré-processador C, executada antes da compilação

==========Questão 16==========
c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita)

==========Questão 17==========
a, b e c estão corretas. letra d está incorreta. o compilador C permite espaços em vários pontos do código, mas os parênteses da chamada da função são obrigatórios