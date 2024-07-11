#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;

    printf ("Insira o numero inicial de patinhos: ");
    scanf ("%d", &n);
    
    while (n > 0){
        if (n == 1){
            printf("1 patinho foi passear\nAlem das montanhas\nPara brincar\nA mamae gritou: Qua, qua, qua, qua\nMas nenhum patinho voltou de la.\n\n");
        }
        else {
            printf("%d patinhos foram passear\nAlem das montanhas\nPara brincar\nA mamae gritou: Qua, qua, qua, qua\nMas so %d patinhos voltaram de la.\n\n", n, n-1);
        }
        n--;
    }
    
    printf("A mamae patinha foi procurar\nAlem das montanhas\nNa beira do mar\nA mamae gritou: Qua, qua, qua, qua\nE os %d patinhos voltaram de la.\n\n", n);

}