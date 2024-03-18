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

float dist_milhas, dist_km;

printf ("Insira a distância em Milhas: ");
scanf ("%f", &dist_milhas);
dist_km = dist_milhas * 1.61;

printf ("Essa é sua distanância em Kilometros: %fkm", dist_km);
}
