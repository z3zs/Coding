#include <stdlib.h>
#include <stdio.h> 

void tipoTriangulo (int lado1, int lado2, int lado3) {
    if (lado1 == lado2 && lado2 == lado3) {
        printf ("Triangulo Equilatero. ");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf ("Triangulo Isosceles. ");
    }
    else {
        printf ("Triangulo Escaleno. ");
    }
}

int main () {
    int lado1, lado2, lado3;

    printf ("Insira o valor dos lados do triangulo: ");
    scanf ("%d", &lado1);
    scanf ("%d", &lado2);
    scanf ("%d", &lado3);

    tipoTriangulo (lado1, lado2, lado3);

    return 0;
}