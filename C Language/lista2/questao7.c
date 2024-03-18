#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_total, valor_desconto, parcelas, comissao_avista, comissao_parc;

    printf ("Insira o valor da venda: ");
    scanf ("%f", &valor_total);

    valor_desconto = valor_total - (valor_total * 1/10);
    parcelas = (valor_total / 3);
    comissao_avista = valor_desconto * 5/100;
    comissao_parc = valor_total * 5/100;

    printf ("Valor com desconto em pagamento a vista: R$%.2f \n", valor_desconto);
    printf ("Valor das parcelas em 3x sem juros: R$%.2f \n", parcelas);
    printf ("Valor da comissao com venda a vista: R$%.2f \n", comissao_avista);
    printf ("Valor da comissao em venda parcelada: R$%.2f \n", comissao_parc);
}