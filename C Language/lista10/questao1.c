#include <stdio.h>

int main() {
    int numInt = 10;
    float numReal = 3.14;
    char caractere = 'A';

    int *pInt;
    float *pReal;
    char *pChar;

    pInt = &numInt;
    pReal = &numReal;
    pChar = &caractere;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", numInt);
    printf("Real: %.2f\n", numReal);
    printf("Caractere: %c\n", caractere);

    *pInt = 20;
    *pReal = 6.28;
    *pChar = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", numInt);
    printf("Real: %.2f\n", numReal);
    printf("Caractere: %c\n", caractere);

    return 0;
}