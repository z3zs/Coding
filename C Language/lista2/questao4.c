#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int primeiro, segundo, terceiro, premio;

    premio = 780.000;

    primeiro = (premio * 46/100);
    segundo = (premio * 32/100);
    terceiro = (premio * 22/100);

    printf ("O valor a ser recebido pelos vencedores sao, respectivamente: \nR$ %dk \nR$ %dk \nR$ %dk", primeiro, segundo, terceiro);
}