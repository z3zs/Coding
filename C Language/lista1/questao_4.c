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

float temp_k, temp_c;


printf ("Insira a temperatura em Kelvin: ");
scanf ("%f", &temp_k);
temp_c = (temp_k - 273.15);

printf ("A temperatura em Celsius é %f", temp_c);
}

