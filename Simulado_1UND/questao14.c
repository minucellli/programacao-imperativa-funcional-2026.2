#include <stdio.h>

int main() {
    int senha;
    int tentativas = 0;
    int correta = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == 12345) {
            printf("Acesso Concedido!\n");
            correta = 1;
            break;
        } else {
            printf("Senha incorreta.\n");
        }
    }

    if (!correta) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}