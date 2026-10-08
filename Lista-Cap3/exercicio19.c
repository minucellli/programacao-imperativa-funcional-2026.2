#include <stdio.h>

int main() {
    int N;
    int i;

    long long int anterior = 1;
    long long int atual = 1;
    long long int proximo;

    printf("Digite o numero do termo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser maior que zero.\n");

        return 0;
    }

    printf("Sequencia:\n");

    if (N >= 1) {
        printf("1 ");
    }

    if (N >= 2) {
        printf("1 ");
    }

    for (i = 3; i <= N; i++) {
        proximo = anterior + atual;

        printf("%lld ", proximo);

        anterior = atual;
        atual = proximo;
    }

    printf("\n");

    if (N == 1) {
        printf("Termo %d = 1\n", N);
    } else {
        printf("Termo %d = %lld\n", N, atual);
    }

    return 0;
}