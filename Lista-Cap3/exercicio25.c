#include <stdio.h>

int main() {
    int N;
    int i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("O numero %d nao e primo.\n", N);

        return 0;
    }

    for (i = 1; i <= N; i++) {

        if (N % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores: %d\n", divisores);

    if (divisores == 2) {
        printf("%d e um numero primo.\n", N);
    } else {
        printf("%d nao e um numero primo.\n", N);
    }

    return 0;
}