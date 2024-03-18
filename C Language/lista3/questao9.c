#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cargo;
    float sal, sal_p, sal_o, aum1, aum2;

    printf ("Insira seu cargo (1 para programador e 2 para outros cargos): ");
    scanf ("%d", &cargo);
    
    printf ("Insira seu salario: ");
    scanf ("%f", &sal);
    
    aum1 = sal * 30/100;
    aum2 = sal * 10/100;
    sal_p = sal + aum1;
    sal_o = sal + aum2;

    if (cargo == 1){
        printf ("Seu salario com aumento foi de %.2f ", sal_p);
    }
    else{
        printf ("Seu salario com aumento foi de %.2f ", sal_o);
    }
}