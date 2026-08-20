#include <stdio.h>
/*
 * ==========================================================
 * PROGRAMA: Calculadora de Media Escolar
 * ==========================================================
 *
 * Este programa recebe tres notas de um aluno,
 * calcula a media aritmetica e informa se o aluno
 * foi aprovado ou reprovado.
 *
 * O programa tambem demonstra a utilizacao de
 * comentarios de multiplas linhas e de uma linha.
 * ==========================================================
 */

int main() 
{
    // Declaracao das variaveis que vão armazenar as notas
    float nota1, nota2, nota3, media;
    // Solicita ao usuario a primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    // Solicita ao usuario a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    // Solicita ao usuario a terceira nota
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    // Calcula a media das tres notas
    media = (nota1 + nota2 + nota3) / 3;
    // Exibe o resultado calculado
    printf("\nMedia final: %.2f\n", media);
    /*
     * Verifica a situacao do aluno.
     * Para este exemplo, a media minima
     * considerada para aprovacao e 7.0.
     */
    if (media >= 7.0)
    {
        // O aluno atingiu a media necessaria
        printf("Situacao: APROVADO!\n");
    }
    else
    {
        // O aluno nao atingiu a media necessaria
        printf("Situacao: REPROVADO.\n");
    }
    // Finaliza o programa
    return 0;
}