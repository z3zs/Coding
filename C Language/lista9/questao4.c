#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aproximaNumero (float *numero) {
    int parteInteira = (int)*numero;
    float parteDecimal = *numero - parteInteira;

    if (parteDecimal < 0.5) {
        *numero = parteInteira;
    }else {
        *numero = ceil(*numero); 
    }
}

int main(){
    float numero;

    printf ("Insira um numero decimal: ");
    scanf("%f", &numero);

    aproximaNumero(&numero);

    printf ("O numero aproximado eh: %.1f\n", numero);

    return 0;
}