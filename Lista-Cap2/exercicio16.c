#include <stdio.h>
#include <math.h>

int main() {
    float alturaDegrau;
    float alturaTotal;
    int quantidade;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura total em metros: ");
    scanf("%f", &alturaTotal);

    alturaTotal = alturaTotal * 100;

    quantidade = ceil(alturaTotal / alturaDegrau);

    printf("Numero minimo de degraus: %d\n", quantidade);

    return 0;
}