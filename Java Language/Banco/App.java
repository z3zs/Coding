public class App {
    public static void main(String[] args) {
        ContaCorrente c1 = new ContaCorrente();
        ContaCorrente c2 = new ContaCorrente();
        ContaCorrente c3 = new ContaCorrente();

        Banco banco = new Banco("Pedro", c1, "Rikson", c2, "Vidal", c3);

        banco.creditar("Vidal", 500.00);
        banco.debitar("Rikson", 2500.00);
        banco.transferir("Vidal", "Pedro", 100.00);

        System.out.println(banco.getSaldo("Rikson"));
        System.out.println(banco.getSaldo("Vidal"));
        System.out.println(banco.getSaldo("Pedro"));


    }
}
