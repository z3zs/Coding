#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float pol, cent;

    printf("Insira o valor em polegadas: ");
    scanf("%f", &pol);

    cent = pol * 2.54;

    printf("O valor eh %f ", cent);
}