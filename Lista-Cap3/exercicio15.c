#include <stdio.h>

int main() {
    int NUM;
    int i;
    int encontrou = 0;

    printf("Digite um numero limite positivo: ");
    scanf("%d", &NUM);

    printf("Multiplos de 3 e 5:\n");

    for (i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao.");
    }

    printf("\n");

    return 0;
}