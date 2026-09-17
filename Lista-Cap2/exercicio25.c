#include <stdio.h>

int main() {
    float salario;
    float gratificacao;
    float imposto;
    float liquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salario);

    gratificacao = salario * 0.05;
    imposto = salario * 0.07;

    liquido = salario + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}