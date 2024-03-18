#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int idade;
    printf ("Insira sua idade: ");
    scanf ("%d", &idade);
    
    if (idade >= 18){
        printf ("Voce pode tirar sua carteira de habilitacao ");
    }
    else {
        printf ("Voce nao atingiu a idade suficiente para tirar sua habilitacao ");
    }
}