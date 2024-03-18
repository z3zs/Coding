#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float valor_produto, valor_desconto;

    printf ("Insira o valor do produto: ");
    scanf ("%f", &valor_produto);

    valor_desconto = valor_produto - (valor_produto * 12/100);

    printf ("O valor do produto com desconto eh: R$%f ", valor_desconto);
}