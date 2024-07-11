#include <stdio.h>

int main() {
    int array[5];
    int *p = array;
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i); 
    }
    printf("\nO dobro de cada valor lido eh:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i) * 2); 
    }
    return 0;
}