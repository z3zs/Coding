#include <stdio.h>
#include <stdlib.h>

int main (){
    float vel, vel_limit, vel_20;

    printf ("Insira a velocidade que voce passou pela rodovia (limite de 80km/h): ");
    scanf ("%f", &vel);

    printf ("Insira a velocidade maxima da rodovia: ");
    scanf ("%f", &vel_limit);

    vel_20 = vel_limit + (vel_limit * 20/100);

    if (vel > vel_limit){
        printf ("Voce foi multado. ");

        if (vel > vel_limit && vel <= vel_20){
            printf ("Sua multa foi de R$ 250,00. ");
        }
        if (vel > vel_20){
            printf ("Sua multa foi de R$ 750,00. ");
        }
    }
    else{
        printf ("Voce nao foi multado. ");
    }
}