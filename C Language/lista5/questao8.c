#include <stdio.h>
#include <stdlib.h>

int main (){

    int qtd_alunos, contador_nota7 = 0, contador_nota47 = 0, contador_nota4 = 0;
    float nota, media_turma, nota_menor4 = 0, nota_maior7 = 0, nota_maior4_menor7 = 0, nota_total = 0, media_valor1 = 0, media_valor2 = 0, media_valor3 = 0;

    printf ("Insira a quantidade de alunos da turma: ");
    scanf ("%d", &qtd_alunos);

    for (int i = 1; i <= qtd_alunos; i++){
        printf ("Insira a nota do aluno %d: ", i);
        scanf ("%f", &nota);

        if (nota >= 7){
            nota_maior7 += nota;
            contador_nota7++;
            nota_total += nota;
            media_valor1 = (contador_nota7 * 100) / qtd_alunos;
        }
        if (nota >= 4 && nota < 7){
            nota_maior4_menor7 += nota;
            contador_nota47++;
            nota_total += nota;
            media_valor2 = (contador_nota47 * 100) / qtd_alunos;
        }
        if (nota < 4){
            nota_menor4 += nota;
            contador_nota4++;
            nota_total += nota;
            media_valor3 = (contador_nota4 * 100) / qtd_alunos;
        }
        media_turma = nota_total / qtd_alunos;
    }
    printf ("\nA quantidade de notas maiores ou iguais a 7: %d\n", contador_nota7);
    printf ("A quantidade de notas maiores ou iguais a 4 e menor que 7: %d\n", contador_nota47);
    printf ("A quantidade de notas menores que 4: %d\n", contador_nota4);

    printf ("\nA porcentagem de notas maiores ou iguais a 7 foi de %.2f porcento.\n", media_valor1);
    printf ("A porcentagem de notas maiores ou iguais a 4 e menores que 7 foi de %.2f porcento.\n", media_valor2);
    printf ("A porcentagem de notas menores que 4 foi de %.2f porcento.\n", media_valor3);

    printf ("\nA media da turma na avaliacao foi de %.2f.\n", media_turma);
}