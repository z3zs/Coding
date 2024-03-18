#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade,
    curso, 
    num_alunos, 
    alunos_eng = 0, 
    alunos_comp = 0, 
    alunos_mat = 0, 
    soma_eng = 0, 
    soma_comp = 0, 
    soma_mat = 0, 
    idade_20_25_eng = 0, 
    idade_20_25_comp = 0, 
    idade_20_25_mat = 0,
    maior_idade = 0,
    curso_aluno_maior_idade;
    float m_idade_eng = 0, 
    m_idade_comp = 0, 
    m_idade_mat = 0;
    
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &num_alunos);

    for (int i = 1; i <= num_alunos; i++){
        printf("Insira seu codigo de curso (1. Eng, 2. Comp, 3. Mat): ");
        scanf("%d", &curso);
        
        if (curso < 1 || curso > 3){
            printf ("Insira um codigo valido. Encerrando aplicacao.\n ");
            break;
        }
        else {
            printf ("Informe a idade: ");
            scanf ("%d", &idade);

            if (maior_idade < idade){
                maior_idade = idade;
                curso_aluno_maior_idade = curso;
            }
            if (curso == 1){
                alunos_eng++;
                soma_eng += idade;
                m_idade_eng = soma_eng / alunos_eng;
                if (idade >= 20 && idade <= 25){
                    idade_20_25_eng++;
                }                
            }
            if (curso == 2){
                alunos_comp++;
                soma_comp += idade;
                m_idade_comp = soma_comp / alunos_comp;
                if (idade >= 20 && idade <= 25){
                    idade_20_25_comp++;
                }
            }
            if (curso == 3){         
                alunos_mat++;
                soma_mat += idade;
                 m_idade_mat = soma_mat / alunos_mat;
                if (idade >= 20 && idade <= 25){
                    idade_20_25_mat++;
                }
            }
        }
    }
    if (m_idade_eng == 0){
        printf ("Nao houve registros para o calculo da media de idade de Engenharia\n");
    }
    else{
        if (m_idade_comp == 0){
            printf ("Nao houve registros para o calculo da media de idade de Computacao\n");
            if (m_idade_mat == 0){
                printf ("Nao houve registros para o calculo da media de idade de Matematica\n");
            }
        }
    }
    if (m_idade_eng < m_idade_comp && m_idade_eng < m_idade_mat){
        printf ("A menor media de idade eh do curso de Engenharia. %.2f anos\n", m_idade_eng);
    }
    
    printf ("O numero de alunos por curso eh:\nEngenharia: %d\nComputacao: %d\nMatematica: %d\n", alunos_eng, alunos_comp, alunos_mat);
    printf ("O numero de alunos em cada curso com idade entre 20 e 25 anos eh:\nEngenharia: %d\nComputacao: %d\nMatematica: %d\n", idade_20_25_eng, idade_20_25_comp, idade_20_25_mat);

    if (curso_aluno_maior_idade == 1){
        printf ("O curso com aluno mais velho eh o de Engenharia e a idade do aluno eh %d\n", maior_idade);
    }
    if (curso_aluno_maior_idade == 2){
        printf ("O curso com aluno mais velho eh o de Computacao e a idade do aluno eh %d\n", maior_idade);
    }
    if (curso_aluno_maior_idade == 3){
        printf ("O curso com aluno mais velho eh o de Matematica e a idade do aluno eh %d\n", maior_idade);
    }
    if (m_idade_eng < m_idade_comp && m_idade_eng < m_idade_mat){
        printf("A menor media de idade eh do curso de Engenharia, com %.2f anos de media.\n", m_idade_eng);
    }
    if (m_idade_comp < m_idade_eng && m_idade_comp < m_idade_mat){
        printf("A menor media de idade eh do curso de Computacao, com %.2f anos de media.\n", m_idade_eng);
    }
    if (m_idade_mat < m_idade_comp && m_idade_mat < m_idade_eng){
        printf("A menor media de idade eh do curso de Matematica, com %.2f anos de media.\n", m_idade_eng);
    }
}