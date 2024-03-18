#include <stdio.h>
#include <stdlib.h>

int main (){
    int valor1, valor2, operacao, resultado;

    printf ("Insira dois valores para realizar uma operacao: ");
    scanf ("%d%d", &valor1, &valor2);

    printf ("Digite um numero para escolher uma operacao:\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
    scanf ("%d", &operacao);

    if (operacao < 1 || operacao > 4){
        printf ("Voce nao escolheu nenhuma das operacoes disponiveis. ");
    }
    else {
        if (operacao == 1){
        resultado = valor1 + valor2;
        
        printf ("A soma eh %d. ", resultado);
        }
        if (operacao == 2){
            resultado = valor1 - valor2;

            printf ("A subtracao eh %d. ", resultado);
        }
        if (operacao == 3){
            resultado = valor1 * valor2;

            printf ("A multiplicacao eh %d. ", resultado);
        }
        if (operacao == 4){
            resultado = valor1 / valor2;

            printf ("A divisao eh %d. ", resultado);
        }
    }
}