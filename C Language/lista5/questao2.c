#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, maior_num, menor_num;

    printf ("Insira o 1 numero: ");
    scanf ("%d", &num);

    maior_num = num;
    menor_num = num;

    for (int i = 1; i < 10; i++){
        printf ("Insira o %d numero: ", i+1);
        scanf ("%d", &num);

        if (num > maior_num){
            maior_num = num;
        }
        
        if (num < menor_num){
            menor_num = num;
        }
    }

    printf ("O maior valor eh %d\n", maior_num);
    printf ("O menor valor eh %d ", menor_num);   
}