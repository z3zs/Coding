public class Conta {
    public int numeroConta;
    public String nomeCliente;
    public double saldoConta;
    
    public Conta (int numeroConta, String nomeCliente, double saldoConta) {
        this.numeroConta = numeroConta;
        this.nomeCliente = nomeCliente;
        this.saldoConta = saldoConta;
    }

    public void depositar(double valor){
        if (valor > 0){
            saldoConta += valor;
            System.out.println("Deposito de " + valor + " feito com sucesso.");
        }
        else {
            System.out.println("Valor invalido para deposito. ");
        }
    }
    public void sacar(double valor){
        if (valor > 0 && saldoConta >= valor){
            saldoConta -= valor;
            System.out.println("Saque de " + valor + " feito com sucesso.");
        }
        else {
            System.out.println("Saldo insuficiente ou valor invalido para saque.");
        }
    }
    public double getSaldo() { 
        return saldoConta;
    }
}