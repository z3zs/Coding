#include <stdio.h>
#include <stdlib.h>

int main (){

    int lado, i, j;

    printf ("Insira o tamanho do lado do quadrado com um valor entre 1 a 20: ");
    scanf ("%d", &lado);

    while (lado < 1 || lado > 20){
        printf ("Tamanho invalido. Insira novamente o valor entre 1 a 20: ");
        scanf ("%d", &lado);       
    }

    i = 0;

    while (i < lado){
        j = 0;
        while (j < lado){
            printf ("* ");
            j++;
        }
        printf ("\n");
        i++;
    }
}