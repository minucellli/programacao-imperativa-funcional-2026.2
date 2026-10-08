#include <stdio.h>

int main() {
    int saque;
    int restante;

    int notas100 = 0;
    int notas50 = 0;
    int notas20 = 0;
    int notas10 = 0;
    int notas5 = 0;
    int notas2 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    if (saque <= 0) {
        printf("Valor de saque invalido.\n");

        return 0;
    }

    restante = saque;

    while (restante >= 100) {
        restante -= 100;
        notas100++;
    }

    while (restante >= 50) {
        restante -= 50;
        notas50++;
    }

    while (restante >= 20) {
        restante -= 20;
        notas20++;
    }

    while (restante >= 10) {
        restante -= 10;
        notas10++;
    }

    while (restante >= 5) {
        restante -= 5;
        notas5++;
    }

    while (restante >= 2) {
        restante -= 2;
        notas2++;
    }

    if (restante != 0) {
        printf("Nao e possivel realizar o saque com as cedulas disponiveis.\n");
    } else {

        printf("\nCedulas utilizadas:\n");

        printf("R$ 100: %d\n", notas100);
        printf("R$ 50: %d\n", notas50);
        printf("R$ 20: %d\n", notas20);
        printf("R$ 10: %d\n", notas10);
        printf("R$ 5: %d\n", notas5);
        printf("R$ 2: %d\n", notas2);
    }

    return 0;
}