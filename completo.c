#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sobrenome[100]; 
    char completo[150]; 

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sobrenome: ");
    scanf(" %[^\n]", sobrenome); 
    
    strcpy(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    printf("Nome completo: %s\n", completo);

    return 0;
}
