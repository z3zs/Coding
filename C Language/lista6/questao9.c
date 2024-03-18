#include <stdio.h>
#include <stdlib.h>

int main (){

    int lado, i, j;

    printf ("Insira um numero entre 1 e 20 como valor para o lado do quadrado: ");
    scanf ("%d", &lado);

    while (lado < 1 || lado > 20){
        printf ("Valor invalido. Insira um valor entre 1 e 20: ");
        scanf ("%d", &lado);
    }

    i = 0;

    while (i < lado){
        j = 0;
        while (j < lado){
            if (i == 0 || i == lado - 1 || j == 0 || j == lado -1){
                printf ("* ");
            }
            else {
                printf ("  ");
            }
            j++;
        }
        printf ("\n");
        i++;
    }
}