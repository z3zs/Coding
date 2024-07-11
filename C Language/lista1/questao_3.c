/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "Portuguese");

float temp_f, temp_c;
float formula;

printf ("Insira a temperatura em Fahreinheit: ");
scanf ("%f", &temp_f);
temp_c = (temp_f - 32) * 5/9;

printf ("A temperatura em Celsius é %f", temp_c);
}
