package questao1;
public class Conta {
    private String numeroConta;
    private double saldo;

    public Conta (String numeroConta, double saldoInicial){
        this.numeroConta = numeroConta;
        this.saldo = saldoInicial;
    }
    
    public void deposito (double quantidade) {
        saldo += quantidade;
    }

    public int saque(double quantidade){
        if (quantidade > saldo){
            return 1;
        }
        else {
            saldo -= quantidade;
            return 0;
        }
    }
    
    public double getSaldo() {
        return saldo;
    }
}