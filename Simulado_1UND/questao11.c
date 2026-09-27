#include <stdio.h>

int main(){
    int dias;
    double bruto, gratificacao, imposto, liquido;
    
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.00;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;

    liquido = bruto + gratificacao - imposto;

    printf("Holerite:\n");
    printf("Salário bruto: R$ %.2f\n", bruto);
    printf("Gratificação (5%): R$ %.2f\n", gratificacao);
    printf("Imposto (8%): R$ %.2f\n", imposto);
    printf("Salário líquido: R$ %.2f\n", liquido);

    return 0;
}