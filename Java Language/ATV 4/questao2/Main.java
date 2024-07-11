package questao2;
public class Main {
    public static void main(String[] args) {
        
    
    Produto produto1 = new Produto("Caneta", 80, 20);
    Produto produto2 = new Produto("Caderno", 60, 15);

    produto1.relatorio();
    produto2.relatorio();

    produto1.comprarProduto(30); // Compra bem-sucedida
    produto2.comprarProduto(50); // Tentativa de compra excedendo o estoque máximo

    produto1.relatorio();
    produto2.relatorio();
    }
}