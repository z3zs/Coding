#include <stdio.h>
#include <stdlib.h>

void ePar (int num){
   if (num % 2 == 0){
        printf ("O numero eh par. ");
   } else {
        printf ("O numero eh impar. ");
   }
}

int main (){
    int num;

    printf ("Insira um numero: ");
    scanf ("%d", &num);

    ePar (num);
}