#include <stdio.h>

int main() {
    int A, B;
    int numero;
    int i;
    int primo;
    int soma = 0;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    printf("Numeros primos no intervalo [%d, %d]:\n", A, B);

    for (numero = A; numero <= B; numero++) {

        if (numero < 2) {
            continue;
        }

        primo = 1;

        for (i = 2; i < numero; i++) {

            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            printf("%d ", numero);

            soma += numero;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}