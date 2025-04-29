#include <stdio.h>

int main() {
    char senha[] = "azimo";
    char tentativas[10]; 
    int restantes = 3;

    while (restantes > 0) {
        printf("Digite sua senha: ");
        scanf("%9s", tentativas); 

        int errada = 0;
        int i = 0;

        while (senha[i] != '\0') {
            if (tentativas[i] == '\0' || tentativas[i] != senha[i]) {
                errada = 1;
                break;
            }
            i++;
        }
        if (tentativas[i] != '\0') {
            errada = 1;
        }

        if (errada) {
            restantes--;
            if (restantes > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", restantes);
            }
        } else {
            printf("Seja bem vindo!\n");
            return 0; 
        }
    }

    printf("Tente novamente mais tarde\n");
    return 0;
}
