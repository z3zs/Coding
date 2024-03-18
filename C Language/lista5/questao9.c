#include <stdio.h>
#include <stdlib.h>

int main(){
    int faltas, qtd_alunos;
    float media_faltas = 0, contador_faltas = 0;

    printf ("Insira a quantidade alunos que participaram da pesquisa: ");
    scanf ("%d", &qtd_alunos);

    for (int i = 1; i <= qtd_alunos; i++){
        printf ("Insira o numero de faltas do aluno %d: ", i);
        scanf ("%d", &faltas);

        if (faltas < 0){
            printf ("Insira apenas numeros validos (positivos). ");
            break;
        }
        else {
            if (faltas > 0){
                contador_faltas += faltas;
            }
        }
    }
    media_faltas = contador_faltas / qtd_alunos;

    printf ("A media de faltas foi de %.2f e a numero de alunos entrevistados foi %d. ", media_faltas, qtd_alunos);
}