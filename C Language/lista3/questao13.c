#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade;
    
    printf ("Insira sua idade para definir sua categoria: ");
    scanf ("%d", &idade);

    if (idade < 5){
        printf ("Voce nao tem idade suficiente para nenhuma categoria ");
    }

    if (idade >= 5 && idade <= 7){
        printf ("Sua categoria eh a Infantil A ");
    }

    if (idade >= 8 && idade <= 10){
        printf ("Sua categoria eh a Infantil B ");
    } 

    if (idade >= 11 && idade <= 13){
        printf ("Sua categoria eh a Juvenil A ");
    }

    if (idade >= 14 && idade <= 17){
        printf ("Sua categoria eh a Juvenil B ");
    }

    if (idade >= 18){
        printf ("Sua categoria eh a de Adultos ");
    }
}