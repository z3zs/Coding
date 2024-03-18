#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qtd_degrau, altura_m;

    printf ("Insira a altura que deseja alcancar: ");
    scanf ("%f", &altura_m);

    qtd_degrau = altura_m / 0.19;

    printf ("Sera necessario subir %.2f degraus para atingir %f ", qtd_degrau, altura_m);
}