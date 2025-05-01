#include <stdio.h>
#include <string.h>

int main() {
    char senha[15]; 

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strlen(senha) < 8) {
        printf("Erro na senha\n");
    } else {
        printf("Senha conforme\n");
    }

    return 0;
}
