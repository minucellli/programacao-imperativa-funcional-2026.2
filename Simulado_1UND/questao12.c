#include <stdio.h>

int main() {
    double nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota inválida! Tente novamene\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota válida: %.1f\n", nota);

    return 0;
}