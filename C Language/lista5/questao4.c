#include <stdio.h>
#include <stdlib.h>

int main (){

    int alunos;
    float nota;


    printf ("Insira quantos alunos ha na turma: ");
    scanf ("%d", &alunos);

    for (int i = 1; i <= alunos; i++){

        printf ("Insira a nota do aluno %d: ", i);
        scanf ("%f", &nota);

        if (nota < 0 || nota > 10){
            printf ("Voce inseriu um valor invalido. Encerrando o programa. ");
            break;
        }
        else {
            if (nota >= 7){
                printf ("O aluno %d foi aprovado.\n", i);
            }
            if (nota >= 4 && nota < 7){
                printf ("O aluno %d esta com a nota em exame.\n", i);
            }
            if (nota < 4){
                printf ("O aluno %d foi reprovado.\n ", i);
            }
        }
    }

}