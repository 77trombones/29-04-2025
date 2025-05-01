#include <stdio.h>
#include <string.h>

int main() {
    char senha[50]; 
    int tentativas = 3;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%s", senha);

        if (strcmp(senha, "azimo") == 0) {
            printf("Seja bem vindo!\n");
            return 0; 
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Tente novamente mais tarde\n");
            }
        }
    }

    return 0;
}