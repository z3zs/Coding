package questao4;

public class EmpregadoTeste {
    public static void main(String[] args) {
        Empregado empregado1 = new Empregado("João", "Silva", 5000.0);
        Empregado empregado2 = new Empregado("Maria", "Santos", 6000.0);

        System.out.println("Salário Anual do Empregado 1: R$ " + empregado1.getSalarioAnual());
        System.out.println("Salário Anual do Empregado 2: R$ " + empregado2.getSalarioAnual());

        empregado1.darAumento();
        empregado2.darAumento();

        System.out.println("\nSalário Anual Atualizado do Empregado 1: R$ " + empregado1.getSalarioAnual());
        System.out.println("Salário Anual Atualizado do Empregado 2: R$ " + empregado2.getSalarioAnual());
    }
}
