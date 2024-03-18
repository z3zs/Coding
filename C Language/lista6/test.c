#include <stdio.h>
#include <stdlib.h>

int main (){

    int contador = 1, num, menor_valor;
    
    printf ("Insira o numero 1: ");
    scanf ("%d", &menor_valor);
    
    while (contador < 10){

        printf ("Insira o numero %d: ", contador + 1);
        scanf ("%d", &num);

        if (num < menor_valor){
            menor_valor = num;
        }
        contador++;
    }
    printf ("O menor valor eh %d ", menor_valor);
}