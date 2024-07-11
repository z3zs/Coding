#include <stdlib.h>
#include <stdio.h>

int main (){
    float sal, valor_conta, soma;
    int contas;

    valor_conta = 0;


    printf ("Insira seu salario: ");
    scanf ("%f", &sal);

    printf ("Insira a quantidade de contas que voce precisa pagar: ");
    scanf ("%d", &contas);

    for (int i = 1; i <= contas; i++){
        printf ("Insira o valor da conta %d: ", i);
        scanf ("%f", &valor_conta);

        soma = valor_conta + soma;
        printf ("R$%.2f\n", soma);
    }
    
    if (soma > sal){
        printf ("Voce precisa reduzir sua despesas. O valor das despesas foi de R$%.2f ", soma);
    }
    else {
        if (soma == sal){
            printf ("Suas despesas tem o mesmo valor do seu salario. salario de R$%.2f e despesa de R$%.2f. ", sal, soma);
        }
        if (soma < sal){
            printf ("Suas despesas estao abaixo do seu salario. Valor de R$%.2f. Continue assim. ", soma);
        }
    }
}