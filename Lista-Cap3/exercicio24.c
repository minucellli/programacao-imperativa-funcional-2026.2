#include <stdio.h>

int main() {
    int N;
    int i, j;

    printf("Digite uma dimensao impar entre 3 e 19: ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Dimensao invalida.\n");

        return 0;
    }

    for (i = 0; i < N; i++) {

        for (j = 0; j < N; j++) {

            if (j == i || j == N - 1 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}