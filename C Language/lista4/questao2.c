#include <stdio.h>
#include <stdlib.h>

int main (){
    int peso, idade;

    printf ("Insira sua idade ");
    scanf ("%d", &idade);

    if (idade >= 18 && idade <= 65){
        
        printf ("Insira seu peso ");
        scanf ("%d", &peso);

        if (peso >= 50){
            printf ("Voce pode doar sangue ");            
        } 
        else {
            printf ("Voce nao pode doar sangue ");
        }
    }
    else {
        printf ("Voce nao pode doar sangue ");
    }
}