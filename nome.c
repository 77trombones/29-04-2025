#include <stdio.h>

int main() {
    char nome[8] = { 'G', 'u', 's', 't', 'a', 'v', 'o', '\0' };

    printf("Nome: %s\n\n", nome);
    printf("* ");

    for(int i = 0; nome[i] != '\0'; i++) {
        printf("%c * ", nome[i]);
    }

    printf("\n");
    return 0;
}