#include <stdlib.h>
#include <stdio.h>

int main (){
    int num;

    printf ("Insira um numero inteiro positivo: ");
    scanf ("%d", &num);

    printf ("Numeros primos de 1 ate %d\n", num);
    
    for (int i = 2; i <= num; i++){

        int primo = 1;

        for (int p = 2; p < i && primo; p++){
            if (i % p == 0){
                primo = 0;
            }
        }        
        
        if (primo){
            printf ("%d ", i);
        }
    }
}