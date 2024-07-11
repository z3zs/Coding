#include <stdio.h>
#include <stdlib.h>

int main (){
    float peso_dog, peso_racao, consumo_diario, p_diaria;

    printf ("Insira o peso do seu cachorro em kg: ");
    scanf ("%f", &peso_dog);
    
    printf ("Insira o peso da sua racao em Gramas: ");
    scanf ("%f", &peso_racao);

    if (peso_dog <= 5){
        p_diaria = 60;

        consumo_diario = peso_racao / p_diaria;

        printf ("A racao ira durar %.2f dias. ", consumo_diario);
    }
    else{
        if (peso_dog >= 6 && peso_dog <= 10){
            p_diaria = 95;

            consumo_diario = peso_racao / p_diaria;

            printf ("A racao ira durar %.2f dias. ", consumo_diario);
        }   
        if (peso_dog >= 11 && peso_dog <= 15){
            p_diaria = 135;

            consumo_diario = peso_racao / p_diaria;

            printf ("A racao ira durar %.2f dias. ", consumo_diario);
        }
        if (peso_dog >= 16 && peso_dog <= 20){
            p_diaria = 170;

            consumo_diario = peso_racao / p_diaria;

            printf ("A racao ira durar %.2f dias. ", consumo_diario);
        }
        if (peso_dog >= 21){
            p_diaria = 215;

            consumo_diario = peso_racao / p_diaria;

            printf ("A racao ira durar %.2f dias. ", consumo_diario);
        }
    }   
}