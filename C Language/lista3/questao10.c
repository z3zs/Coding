#include <stdlib.h>
#include <stdio.h>

int main (){
    int ano, meses, dias;

    printf ("Insira sua idade em dias ");
    scanf ("%d", &dias);

    meses = dias / 30;
    ano = dias / 365;

    printf ("Sua idade eh %d anos, ou %d meses ou %d dias ", ano, meses, dias);
}