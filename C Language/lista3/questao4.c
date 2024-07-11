#include <stdlib.h>
#include <stdio.h>

int main()
{
    float nota1, nota2, trab, media, m_peso;  

    printf ("Insira suas notas e a do trabalho ");
    scanf ("%f%f%f", &nota1, &nota2, &trab);

    media = (nota1 * 3) + (nota2 * 3) + (trab * 1);
    m_peso = media / 7;
    
    if (m_peso >= 7){
        printf ("Voce foi aprovado, parabens. ");
    }
    else {
        printf ("Voce foi reprovado.\n");
    }
    printf ("Sua media foi %.2f", m_peso);
}