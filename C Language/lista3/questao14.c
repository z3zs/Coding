#include <stdio.h>
#include <stdlib.h>

int main (){
    int valor, hs, min, s;

    printf ("Insira a quantidade de tempo necessario em segundos: ");
    scanf ("%d", &valor);

    hs = valor / 3600;
    min = (valor % 3600) / 60;
    s = min % 60;
    
    printf ("O tempo foi de %dh:%dm:%ds ", hs, min, s);
}