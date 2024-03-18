#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, tabuada, contador = 1;

    printf ("Insira um numero entre 1 a 10: ");
    scanf ("%d", &num);

    while (num < 0 || num > 10){
        printf ("Insira um numero entre 1 e 10: ");
        scanf ("%d", &num);
    }
    while (contador <= 10){
        tabuada = num * contador;
        contador++;
        printf ("%d x %d = %d\n", num, contador - 1, tabuada);
    }
}