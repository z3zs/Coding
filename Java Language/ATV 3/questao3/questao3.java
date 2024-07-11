import java.util.Scanner;
import java.util.ArrayList;

class Questao3 {
    public static void main(String args[]) {
        ArrayList<Double> salarios = new ArrayList<>();
        Scanner ler = new Scanner(System.in);

        double salario = 0;

        while (salario != -1) {
            System.out.println("Insira o seu sálario: ");
            salario = ler.nextDouble();
            salarios.add(salario);
        }
        double reajuste = 200;
        System.out.println("O valor reajustado é: ");
        System.out.println("");
        for (int i = 0; i < salarios.size(); i++) {
            System.out.println("R$ " + (salarios.get(i) + reajuste));
            salarios.remove(Double.valueOf(-1));
        }
        ler.close();
    }
}