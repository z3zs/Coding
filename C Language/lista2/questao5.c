#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float diaria, dias, valor_liquido, valor;

    printf ("Insira seus dias trabalhados: ");
    scanf ("%f", &dias);

    diaria = 30.00;
    valor = (diaria * dias);
    valor_liquido = valor - (valor * 8/100);
    
    printf ("O valor a ser recebido pelo encanador foi: R$%.2f ", valor_liquido);
}