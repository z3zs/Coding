#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero;

    printf ("Insira um numero inteiro ");
    scanf ("%d", &numero);

    if (numero % 2 == 0)
    {
        printf ("O numero %d eh par ", numero);
    }
    else
    {
        if (numero % 2 != 0){
            printf ("O numero %d eh impar ", numero);
        }
    }
}