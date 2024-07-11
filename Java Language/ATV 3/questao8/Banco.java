public class Banco {
    public int numeroConta;
    public String nomeCliente;
    public double saldoAtual;

    public Banco(int numeroConta, String nomeCliente, double saldoAtual) {
        this.numeroConta = numeroConta;
        this.nomeCliente = nomeCliente;
        this.saldoAtual = saldoAtual;
    }

    public void depositar(double valor) {
        if (valor > 0) {
            saldoAtual += valor;
            System.out.println("Deposito de R$ " + valor + " feito.");
        } else {
            System.out.println("Valor invalido.");
        }
    }

    public void sacar(double valor) {
        if (valor > 0 && saldoAtual >= valor) {
            saldoAtual -= valor;
            System.out.println("Saque de R$ " + valor + " feito.");
        } else {
            System.out.println("Não há saldo suficiente para saque.");
        }
    }

    public double getSaldo() {
        return saldoAtual;
    }

    public int getnumeroConta() {
        return numeroConta;
    }

    public String getnomeCliente() {
        return nomeCliente;
    }
}