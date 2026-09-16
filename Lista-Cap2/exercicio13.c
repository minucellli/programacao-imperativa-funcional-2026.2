#include <stdio.h>

int main() {
    float lado;
    float base, altura;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Area do quadrado: %.2f\n", lado * lado);

    printf("\nDigite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    printf("Area do retangulo: %.2f\n", base * altura);

    printf("\nDigite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    printf("Area do triangulo: %.2f\n", (base * altura) / 2.0);

    return 0;
}