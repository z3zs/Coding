#include <stdio.h>
#include <stdlib.h>

int main (){
    int pedidos, qtd_item, media_item = 0, contador_menos20 = 0, contador_item = 0;
    float menos20, soma_comissao, valor = 0, valor_soma = 0, comissao = 0;
    
    printf ("Insira a quantidade de pedidos: ");
    scanf ("%d", &pedidos);
    

    for (int i = 1; i <= pedidos; i++){
        printf ("Insira a quantidade de itens do pedido %d: ", i);
        scanf ("%d", &qtd_item);
        printf ("Insira o valor do pedido %d em reais: ", i);
        scanf ("%f", &valor);
        
        valor_soma += valor;

        if (qtd_item < 20){
            comissao = valor * 10/100;
            printf ("A comissao para essa venda sera de R$%.2f.\n", comissao);
            contador_menos20++;
            soma_comissao += comissao;
            contador_item += qtd_item;
        }
        if (qtd_item >= 20 && qtd_item <= 49){
            comissao = valor * 15/100;
            printf ("A comissao para essa venda sera de R$%.2f.\n", comissao);
            soma_comissao += comissao;  
            contador_item += qtd_item;    
        }
        if (qtd_item >= 50 && qtd_item <= 74){
            comissao = valor * 20/100;
            printf ("A comissao para essa venda sera de R$%.2f.\n", comissao); 
            soma_comissao += comissao;
            contador_item += qtd_item;          
        }
        if (qtd_item > 74){
            comissao = valor * 25/100;
            printf ("A comissao para essa venda sera de R$%.2f.\n", comissao);   
            soma_comissao += comissao; 
            contador_item += qtd_item;  
        }             
    }
    
    media_item = contador_item / pedidos;
    menos20 = (contador_menos20 * 100) / pedidos;

    printf ("\nO valor total dos pedidos foi de R$%.2f.\n", valor_soma);
    printf ("O valor somado de comissao recebido sera de R$%.2f.\n", soma_comissao);
    printf ("A media foi %d itens por pedido.\n", media_item);
    printf ("A porcentagem de pedidos com menos de 20 itens foi de %.f porcento.\n", menos20);
}