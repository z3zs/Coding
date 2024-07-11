#include <stdio.h>
#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf ("Insira dois numeros inteiros postivos em ordem crescente: ");
    scanf ("%d%d", &num1, &num2);

    if (num1 >= num2){
        printf ("A ordem inserida eh invalida ");
    }
    else{
        for (int i = num1; i <= num2; i++){
            if (i % 7 == 0)
            {
                printf ("%d\n", i);
            }
        }       
    }   
}