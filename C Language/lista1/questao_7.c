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

int num1, num2, num3;
int soma_quadrado;

printf ("Insira três números: ");
scanf ("%d%d%d", &num1, &num2, &num3);

soma_quadrado = (num1 * num1) + (num2 * num2) + (num3 * num3);

printf ("A soma dos quadrados é: %d", soma_quadrado);
}
