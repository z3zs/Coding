#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverteString (const char* frase) {
    int tamanho = strlen(frase);
    char* fraseInvertida = (char*)malloc((tamanho + 1) * sizeof(char));

    for (int i = 0; i < tamanho; i++) {
        fraseInvertida[i] = frase[tamanho - 1 - i];
    }

    fraseInvertida[tamanho] = '\0';

    return fraseInvertida;
}

int main (){
    char frase[100];

    printf ("Insira sua frase: ");
    fgets (frase, sizeof(frase), stdin);

    int len = strlen(frase);
    if (frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    char* fraseInvertida = inverteString(frase);

    printf ("Frase normal: %s\n", frase);
    printf ("Frase invertida: %s\n", fraseInvertida);

    free(fraseInvertida);

    return 0;
}