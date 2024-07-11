public class Gato {
    public String nome;
    public String cor;
    public int idade;

    public Gato(String nome, String cor, int idade) {
        this.nome = nome;
        this.cor = cor;
        this.idade = idade;
    }

    public void dormir() {
        System.out.println(nome + " está dormindo. Ele tem " + idade + " anos. Ele tem a cor " + cor);
    }

    public void brincar() {
        System.out.println(nome + " está brincando. Ele tem " + idade + " anos. Ele tem a cor " + cor);
    }

    public void comer() {
        System.out.println(nome + " está comendo");
    }
}