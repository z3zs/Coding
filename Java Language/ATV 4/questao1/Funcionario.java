package questao1;
public class Funcionario {
    private String nome;
    private String cargo;
    private double salarioBase;
    private double salario;

    public Funcionario(String nome, String cargo, double salarioBase) {
        this.nome = nome;
        this.cargo = cargo;
        this.salarioBase = salarioBase;
        this.salario = getSalario();
    }

    public double getSalario () {
        return salarioBase;
    }
    
    public void dados() {
        System.out.println("Nome: " + nome);
        System.out.println("Cargo: " + cargo);
        System.out.println("Sálario: R$ " + salario);
    }
}