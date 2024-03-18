#include <stdio.h>
#include <stdlib.h>

int main (){
    float peso, altura, imc, altura2;

    printf ("Insira seu peso e altura, respectivamente: ");
    scanf ("%f%f", &peso, &altura);

    altura2 = altura * altura;
    imc = peso / altura2;

    if (imc > 30){
        printf ("Voce esta obeso.\nSeu IMC eh de %.2f.\n ", imc);
    }
    else {
        printf ("Voce nao esta obeso.\nSeu IMC eh de %.2f.\n ", imc);
    }
}
