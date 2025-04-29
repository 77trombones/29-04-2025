#include <stdio.h>

int main() {
    char senha[] = "azimo";
    char tentativas[10];

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
        printf("Senha errada.\n");
    } else {
        printf("Seja bem vindo!\n");
    }

    return 0;
}
