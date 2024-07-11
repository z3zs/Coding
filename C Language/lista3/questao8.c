#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float sal_inicial, sal_liquido1, sal_liquido2, imp1, imp2;

    printf ("Insira seu salario bruto: ");
    scanf ("%f", &sal_inicial);

    imp1 = sal_inicial * 15/100;
    imp2 = sal_inicial * 27/100;
    sal_liquido1 = sal_inicial - imp1;
    sal_liquido2 = sal_inicial - imp2;

    if (sal_inicial <= 999){
        printf ("Voce nao pagara impostos. Seu salario eh R$ %.2f ", sal_inicial);
    }   
    if (sal_inicial > 999 && sal_inicial <= 1499){
        printf ("Seu salario liquido eh R$ %.2f ", sal_liquido1);
    }
    if (sal_inicial > 1499){
        printf ("Seu salario liquido eh R$ %.2f ", sal_liquido2);
    }
}