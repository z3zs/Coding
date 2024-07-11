#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float real, dolar, real_conver;

    printf ("Insira um valor em reais (R$) ");
    scanf ("%f", &real);

    dolar = 4.99;

    real_conver = real * dolar;

    printf ("O valor em dolar eh de %f ", real_conver);
}