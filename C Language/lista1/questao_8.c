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

float nota1, nota2, media;

printf ("Insira suas notas: ");
scanf ("%f%f", &nota1, &nota2);

media = (nota1 + nota2) / 2;

printf ("Sua media foi %f", media);
}
