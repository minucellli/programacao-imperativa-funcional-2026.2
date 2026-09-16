#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Multiplicacao: %d\n", numero1 * numero2);

    if (numero2 != 0) {
        printf("Divisao: %.2f\n", (float)numero1 / numero2);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}