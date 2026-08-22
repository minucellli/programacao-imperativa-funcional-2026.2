não, pela perspectiva do padrão ANSI C, o programa não tá completo pra compilação e execução imediata, pois faltam alguns elementos importantes pra que o compilador reconheça corretamente as funções utilizadas

coisas erradas ou que faltam:
está faltando o #include <stdio.h>, que é necessário para a função printf().
e o #include <stdlib.h>, que vai declarar a função system().
além de que é necessário declarar a função principal como int main() e finalizar com return 0;