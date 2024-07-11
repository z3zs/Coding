#include <stdio.h>
#include <stdlib.h>

int main (){

    int alunos, contador = 0;
    float nota, soma_notas, media;

    printf ("Insira a quantidade de alunos da turma: ");
    scanf ("%d", &alunos);

    while (contador < alunos){
        printf ("Insira a nota do aluno %d: ", contador + 1);
        scanf ("%f", &nota);
        soma_notas += nota;
        contador++;
    }
    media = soma_notas / alunos;

    printf ("A media aritmetica da turma eh %.2f ", media);
}