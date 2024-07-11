package questao5;

public class LivroLivrariaTeste {
    public static void main(String[] args) {
        LivroLivraria livro1 = new LivroLivraria();
        LivroLivraria livro2 = new LivroLivraria("Java Programming", "John Smith", 49.99);
        LivroLivraria livro3 = new LivroLivraria("Python Basics", "Jane Doe", 29.99, 50);

        livro1.exibirInformacoes();
        System.out.println("--------------");
        livro2.exibirInformacoes();
        System.out.println("--------------");
        livro3.exibirInformacoes();

        livro3.venderLivros(10);
        livro3.exibirInformacoes();
    }
}