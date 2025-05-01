#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6];
    char letra;
    int erros = 0;
    int i; // tanto faz a letra
    int achou;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%s", palavra);

    while (erros < 3) {
        printf("Digite uma letra: ");
        scanf("  %c", &letra); 

        achou = 0;
        for (i = 0; i < strlen(palavra); i++) {
            if (palavra[i] == letra) {
                achou = 1;
                break;
            }
        }

        if (achou) {
            printf("Letra encontrada!\n");
        } else {
            printf("Letra não encontrada.\n");
            erros++;
            printf("Erros: %d/3\n", erros);
        }
    }

    printf("Sem mais tentativas.\n");

    return 0;
}
