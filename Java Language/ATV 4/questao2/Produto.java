package questao2;
public class Produto {
    private String nome;
    private int estoque;
    private int estoqueMinimo;

    public Produto(String nome, int estoque, int estoqueMinimo) {
        this.nome = nome;
        this.estoque = estoque;
        this.estoqueMinimo = estoqueMinimo;
    }
    public int getSituacao() {
        if (estoque > estoqueMinimo) {
            return 0; 
        } else {
            return 1;
        }
    }
    public void relatorio() {
        System.out.println("=== Relatório do Produto ===");
        System.out.println("Nome: " + nome);
        System.out.println("Estoque: " + estoque + " unidades");

        if (getSituacao() == 1) {
            System.out.println("Necessita comprar mais produto.");
        }

        System.out.println("===========================");
    }
    public void comprarProduto(int quantidade) {
        if (estoque + quantidade <= 100) {
            estoque += quantidade;
            System.out.println("Compra realizada com sucesso.");
        } else {
            System.out.println("Não é possível comprar mais produto. Estoque máximo permitido: 100 unidades.");
        }
    }
}

