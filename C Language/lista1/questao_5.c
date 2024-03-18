/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

float velocidade_km, velocidade_metros;

printf ("Insira a velocidade em kilometros: ");
scanf ("%f", &velocidade_km);

velocidade_metros = velocidade_km / 3.6;

printf ("Essa é a sua velocidade em m/s: %f", velocidade_metros);
}
