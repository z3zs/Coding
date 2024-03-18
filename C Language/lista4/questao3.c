#include <stdio.h>
#include <stdlib.h>

int main (){
    float idade, altura, idioma;
    printf ("Insira sua altura: ");
    scanf ("%f", &altura);

    if (altura >= 1.70){
        printf ("Insira sua idade: ");
        scanf ("%f", &idade);
        
        if (idade >= 24){
            printf ("Insira a quantidade de idiomas em que voce eh fluente: ");
            scanf ("%f", &idioma);

            if (idioma >= 2){
                printf ("Parabens, voce se enquadra para ser aeromoca. ");
            }
            else {
            printf ("Voce nao se enquadra para ser aeromoca. ");    
            }
        }
        else {
        printf ("Voce nao se enquadra para ser aeromoca. ");
        }
    }
    else {
        printf ("Voce nao se enquadra para ser aeromoca! ");
    }
}   