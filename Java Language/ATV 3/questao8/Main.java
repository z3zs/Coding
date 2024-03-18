public class Main {
    public static void main(String args[]) {
        Banco minhaConta = new Banco(1, "Kevy", 1000.0);

        minhaConta.sacar(300.0);
        minhaConta.depositar(500.0);

        double saldo = minhaConta.getSaldo();

        System.out.println("Saldo atual: R$ " + saldo + ".");
    }
}