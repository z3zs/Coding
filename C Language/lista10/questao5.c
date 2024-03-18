#include <stdio.h>
#include <string.h>

void Cadastro() {
    char nome[100];
    char funcao[100];
    int numCapacitacoes;

    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", nome);

    printf("Digite a funcao do funcionario: ");
    scanf(" %[^\n]", funcao);

    printf("Digite o numero de capacitacoes realizadas: ");
    scanf("%d", &numCapacitacoes);

    char capacitacoes[numCapacitacoes][21];

    printf("Digite o nome de cada capacitacao (com no maximo 20 letras):\n");
    for (int i = 0; i < numCapacitacoes; i++) {
        scanf(" %[^\n]", capacitacoes[i]);
    }

    printf("\nInformacoes do funcionario:\n");
    printf("Nome: %s\n", nome);
    printf("Funcao: %s\n", funcao);
    printf("Capacitacoes:\n");
    for (int i = 0; i < numCapacitacoes; i++) {
        printf("- %s\n", capacitacoes[i]);
    }
}
int main() {
    Cadastro();

    return 0;
}