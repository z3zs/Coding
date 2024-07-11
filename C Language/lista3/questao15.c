#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, resto, n100, n50, n10, n5, n1;

    printf ("Insira um valor em reais para ser decomposto ");
    scanf ("%d", &valor);
    
    resto = valor;

    n100 = resto / 100;
    resto = resto - (n100 * 100);
    
    n50 = resto / 50;
    resto = resto - (n50 * 50);

    n10 = resto / 10;
    resto = resto - (n10 * 10);

    n5 = resto / 5;
    resto = resto - (n5 * 5);

    n1 = resto / 1;
    resto = resto - (n1 * 1);

    printf ("Valor: %d\n ", valor);
    printf ("Notas de 100 %d\n", n100);
    printf ("Notas de 50 %d\n", n50);
    printf ("Notas de 10 %d\n", n10);
    printf ("Notas de 5 %d\n", n5);
    printf ("Notas de 1 %d\n", n1);
}