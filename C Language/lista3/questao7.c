#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float peso, alt, imc, alt2;

    printf ("Insira seu peso e altura, respectivamente: ");
    scanf ("%f%f", &peso, &alt);
    alt2 = (alt * alt);
    imc = (peso / alt2);    
    
    if (imc > 30)
    {
        printf ("Voce esta obeso. IMC de %.2f ", imc);
    }
    else
    {   
        printf ("Voce nao esta obeso. IMC de %.2f ", imc);
    }
}