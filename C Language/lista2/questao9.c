#include <stdlib.h>
#include <stdio.h>

int main()
{
    float valor1, valor2, valor3, valor_premio, parte1, parte2, parte3, valor_total, total1, total2, total3;

    printf ("Insira o valor das apostas, na ordem em que apostaram: \n");
    scanf ("%f%f%f", &valor1, &valor2, &valor3);
    printf ("Insira o valor do premio: ");
    scanf ("%f", &valor_premio);
    
    valor_total = valor1 + valor2 + valor3;

    parte1 = valor1 / valor_total;
    parte2 = valor2 / valor_total;
    parte3 = valor3 / valor_total;

    total1 = valor_premio * parte1;
    total2 = valor_premio * parte2;
    total3 = valor_premio * parte3;

    printf ("O valor do premio eh R$%f e cada um recebera: \nApostador 1: R$%.2f \nApostador 2: R$%.2f \nApostador 3: R$%.2f ", valor_premio, total1, total2, total3);
}
