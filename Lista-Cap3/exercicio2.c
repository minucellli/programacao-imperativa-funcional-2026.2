//Letra c
#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;
}

/*A variável soma precisa ser declarada fora do for para que possa ser utilizada durante todas as iterações e também depois do término do 
laço.O escopo determina onde uma variável pode ser utilizada. Uma variável declarada dentro de um bloco { } possui escopo limitado àquele 
bloco. O tempo de vida indica durante quanto tempo aquela variável existe durante a execução. Uma variável local declarada dentro de um 
bloco normalmente existe enquanto aquele bloco estiver sendo executado.*/