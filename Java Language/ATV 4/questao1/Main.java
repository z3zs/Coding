package questao1;
public class Main {
    public static void main(String[] args) {
        Funcionario f1 = new Funcionario("Clay", "Estoquista", 1800);
        Funcionario f2 = new Funcionario("Gildarte", "Gerente", 5000);
       

        Conta c1 = new Conta("71152773", 2000);
        Conta c2 = new Conta("66558222", 5000);

        f1.dados();
        System.out.println("");
        f2.dados();

        System.out.println("");

        c1.deposito(2500);
        c1.saque(500);
        
        c2.deposito(4000);
        c2.saque(600);

        System.out.println("Saldo Conta 1: R$ " + c1.getSaldo());
        System.out.println("Saldo Conta 2: R$ " + c2.getSaldo());
    }
}