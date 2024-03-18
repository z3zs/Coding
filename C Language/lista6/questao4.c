#include <stdio.h>
#include <stdlib.h>

int main (){

    int n, i = 1;

    printf ("Insira um numero inteiro: ");
    scanf ("%d", &n);


    printf ("Numeros pares ate %d:\n", n);
    
    while (i <= n){
        
        if (i % 2 == 0){
            printf ("%d\n", i);
        }
        i++;
    }
    
    printf ("\nNumeros impares ate %d:\n", n);
    
    i = 1;
    
    while (i <= n){

        if (i % 2 != 0){
            printf ("%d\n", i);
        }
        i++;
    }
}