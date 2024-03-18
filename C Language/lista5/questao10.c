#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor, valor_positivo = 0;

    for (int i = 1; i <= 10; i++){
        printf ("Insira o %d valor: ", i);
        scanf ("%d", &valor);

        if (valor > 0){
            valor_positivo++;
        }
    }
    printf ("\nForam inseridos %d numeros positivos. ", valor_positivo);
}