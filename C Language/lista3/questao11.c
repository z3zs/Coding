#include <stdio.h>
#include <stdlib.h>

int main (){
    float custo, custo_d, imp, custo_total;

    printf ("Insira o custo do automovel ");
    scanf ("%f", &custo);
    
    custo_d = custo * 28/100;
    imp = custo * 45/100;
    custo_total = custo + custo_d + imp;

    printf ("O custo do automovel eh %.2f ", custo_total);
}