public class ContaCorrente {
    public double saldoAtual;
    
    public ContaCorrente() {
        this.saldoAtual = 0;
    }

    public void executarOperacao (Operacao opr){
        saldoAtual += opr.operar();
    }

    public double getSalarioAtual() {
        return saldoAtual;
    }
}
