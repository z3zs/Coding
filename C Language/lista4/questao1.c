#include <stdlib.h>
#include <stdio.h>

int main (){
    int pergunta;

    printf ("Pense em um numero de 1 a 4 \n");
    
    printf ("O numero eh maior que que 2? (1 para SIM e 2 para NAO) ");
    scanf ("%d", &pergunta);

    if (pergunta == 1){
        printf ("O numero eh maior que 3? (1 - sim, 2 - nao) ");
        scanf ("%d", &pergunta);

        if (pergunta == 1){
            printf ("Seu numero eh 4 ");
        }
        else {
            printf ("Seu numero eh 3 ");
        }
    }
    else {
        printf ("O numero eh maior que 1? (1 - sim, 2 - nao) ");
        scanf ("%d", &pergunta);

        if (pergunta == 2){
            printf ("Seu numero eh 1 ");
        }
        else {
            printf ("Seu numero eh 2 ");
        }
    } 
}