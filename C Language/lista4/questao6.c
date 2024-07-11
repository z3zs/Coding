#include <stdio.h>
#include <stdlib.h>

int main (){
    float salario, reajuste;

    printf ("Insira o valor do seu salario: ");
    scanf ("%f", &salario);
    
    if (salario < 500){
        
        reajuste = salario + (salario * 15/100);

        printf ("O seu salario com o reajuste eh R$%.2f. ", reajuste);     
    } 
    else {
        if (salario >= 500 && salario <= 1000){

            reajuste = salario + (salario * 8/100);

            printf ("O seu salario com o reajuste eh R$%.2f. ", reajuste);
        }
        if (salario > 1000){

            reajuste = salario + (salario * 3/100);

            printf ("O seu salario com reajuste eh R$%.2f. ", reajuste);
        }
    }   
}