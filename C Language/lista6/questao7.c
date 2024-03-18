#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, contador = 0, maior_num1, maior_num2;

    printf ("Insira o numero 1: ");
    scanf ("%d", &maior_num1);

    printf ("Insira o numero 2: ");
    scanf ("%d", &maior_num2);
    
    if (maior_num2 > maior_num1){
        int temp = maior_num1;
        maior_num2 = maior_num1;
        maior_num2 = temp;
    }
    while (contador < 8){
        printf ("Insira o numero %d: ", contador + 3);
        scanf ("%d", &num);
        contador++;

        if (num > maior_num1){
            maior_num2 = maior_num1;
            maior_num1 = num;
        }
        else if (num > maior_num2){
                maior_num2 = num;
            }     
        }   
    printf ("Os maiores valores sao %d e %d", maior_num1, maior_num2);
}