#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float salario_base, salario_liquido, bonif, imposto;

    printf ("Insira seu salario bruto (sem descontos ou bonus) ");
    scanf ("%f", &salario_base);

    bonif = salario_base * 5/100;
    imposto = salario_base * 7/100;
    salario_liquido = salario_base + bonif - imposto;

    printf ("Seu salario liquido sera: \nR$ %f ", salario_liquido);
}