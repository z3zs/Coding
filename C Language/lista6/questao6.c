#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, contador = 0, maior_num = 0;

    while (contador < 10){
        printf ("Insira o numero %d: ", contador + 1);
        scanf ("%d", &num);
        contador++;
        
        if (num > maior_num){
            maior_num = num++;
        }
    }

    printf ("O maior valor eh %d", maior_num);

}