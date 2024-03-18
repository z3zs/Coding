#include <stdio.h>

int main() {
    int matriz[3][4]; // Declaração de uma matriz 3x4 (3 linhas, 4 colunas)

    // Preenchendo a matriz com valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = i * 4 + j + 1;
        }
    }

    // Imprimindo a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
