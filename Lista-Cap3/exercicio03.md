a) 36 18 9 4 2 1

b) No trecho:
for (; (ch = getch()) != 'X'; )
    printf("%c", ch + 1);
a função getch() lê um caractere e esse caractere é armazenado na variável ch.
A expressão ch + 1 representa o próximo código de caractere. Por exemplo, se ch for 'A', ch + 1 corresponde a 'B'.
Os parênteses em (ch = getch()) são necessários para que primeiro seja realizada a atribuição do caractere à variável ch e depois o resultado seja comparado com 'X'

c) Ele pode ser interrompido de forma programática utilizando break, quando a condição dentro do break for verdadeira, ele interrompe o laço