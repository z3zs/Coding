public class Correntista {
    public String nome;
    public ContaCorrente conta;

    public Correntista(String nome){
        this.nome = nome;
        this.conta = new ContaCorrente();
    }

    public String getNome(){
        return nome;
    }
    public ContaCorrente getContaCorrente(){
        return conta;
    }
}
