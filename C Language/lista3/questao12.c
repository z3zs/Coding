#include <stdio.h>
#include <stdlib.h>

int main (){
    int operacao, valor1, valor2, conta;

    printf ("Insira dois valores para realizar a operacao: ");
    scanf ("%d%d", &valor1, &valor2);

    printf ("Para realizar uma operacao, insira o numero relacionado\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf ("%d", &operacao);

    if (operacao < 1 || operacao > 4){
        printf ("Voce nao inseriu uma opcao valida. ");
    }
    else {
        if (operacao == 1){
            conta = valor1 + valor2;

            printf ("O resultado da soma eh %d. ", conta);
        }
        if (operacao == 2){
            conta = valor1 - valor2;

            printf ("O resultado da subtracao eh %d. ", conta);
        }
        if (operacao == 3){
            conta = valor1 * valor2;

            printf ("O resultado da multiplicacao eh %d. ", conta);
        }
        if (operacao == 4){
            conta = valor1 / valor2;

            printf ("O resultado da divisao eh %d. ", conta);
        }
    }
}