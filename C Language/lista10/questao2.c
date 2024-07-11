#include <stdio.h>
void trocarValores(int *pA, int *pB) {
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
}
int main() {
    int numA, numB;

    printf("Digite o valor de A: ");
    scanf("%d", &numA);

    printf("Digite o valor de B: ");
    scanf("%d", &numB);

    printf("\nValores antes da troca:\n");
    printf("A: %d\n", numA);
    printf("B: %d\n", numB);

    trocarValores(&numA, &numB);

    printf("\nValores apos a troca:\n");
    printf("A: %d\n", numA);
    printf("B: %d\n", numB);

    return 0;
}