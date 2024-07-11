#include <stdlib.h>
#include <stdio.h>

int main() 
{
    float temperatura;

    printf ("Insira a temperatura corporal: ");
    scanf ("%f", &temperatura);

    if (temperatura > 37)
    {
        printf ("Voce esta com febre ");
    }
    else
    {
        printf ("Voce nao esta com febre ");
    }
}
