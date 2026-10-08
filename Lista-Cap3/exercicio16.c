#include <stdio.h>

int main() {
    int senha;
    int senhaSecreta = 2026;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativas);

            acertou = 1;

            break;
        } else {
            printf("Senha incorreta.\n");
        }
    }

    if (!acertou) {
        printf("Conta Bloqueada por Segurança!\n");
    }

    return 0;
}