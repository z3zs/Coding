package questao5;

public class LivroLivraria {
    private String titulo;
    private String autor;
    private double preco;
    private int quantidadeEstoque;

    public LivroLivraria() {
        this.titulo = "Sem título";
        this.autor = "Autor desconhecido";
        this.preco = 0.0;
        this.quantidadeEstoque = 0;
    }

    public LivroLivraria(String titulo, String autor, double preco) {
        this(); 
        this.titulo = titulo;
        this.autor = autor;
        this.preco = preco;
    }

    public LivroLivraria(String titulo, String autor, double preco, int quantidadeEstoque) {
        this(titulo, autor, preco);
        this.quantidadeEstoque = quantidadeEstoque;
    }

    public void exibirInformacoes() {
        System.out.println("Título: " + titulo);
        System.out.println("Autor: " + autor);
        System.out.println("Preço: R$ " + preco);
        System.out.println("Quantidade em Estoque: " + quantidadeEstoque);
    }

    public void venderLivros(int quantidade) {
        if (quantidade > 0 && quantidade <= quantidadeEstoque) {
            quantidadeEstoque -= quantidade;
            System.out.println("Venda realizada com sucesso.");
        } else {
            System.out.println("Quantidade inválida ou insuficiente em estoque.");
        }
    }
}