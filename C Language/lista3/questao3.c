#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int n1, n2;

    printf ("Insira dois numeros ");
    scanf ("%d%d", &n1, &n2);
     
    if (n1 > n2){
        printf ("O maior numero eh %d ", n1);
    }
    if (n2 > n1){
        printf ("O maior numero eh %d ", n2);
    }
    if (n2 == n1){
        printf ("Os numeros sao iguais ");
    }
}