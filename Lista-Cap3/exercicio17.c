#include <stdio.h>

int main() {
    float nota;
    float maior = 0;
    float menor = 10;
    float soma = 0;
    float media;
    int quantidade = 0;

    while (1) {
        printf("Digite a nota (-1 para encerrar): ");
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota >= 0.0 && nota <= 10.0) {

            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }

            soma += nota;
            quantidade++;

        } else {
            printf("Nota invalida.\n");
        }
    }

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("\nTotal de alunos: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    } else {
        printf("Nenhum aluno foi avaliado.\n");
    }

    return 0;
}