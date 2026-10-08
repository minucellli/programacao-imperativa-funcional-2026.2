#include <stdio.h>

int main() {
    int i;

    printf("FOR:\n");

    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\nWHILE:\n");

    i = 0;

    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nDO-WHILE:\n");

    i = 0;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    return 0;
}

/*
A estrutura for e a mais adequada neste caso,
pois sabemos o valor inicial, a condicao de parada
e o incremento.
*/