import java.util.Scanner;
import java.util.ArrayList;

class Questao2 {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        ArrayList<Double> notas = new ArrayList<>();

        System.out.println("Insira a quantidade de notas: ");
        int qtd = ler.nextInt();

        for (int i = 0; i < qtd; i++) {
            System.out.println("Insira a nota " + (i + 1) + ":");
            double nota = ler.nextDouble();
            notas.add(nota);
        }

        double soma = 0;

        for (double nota : notas) {
            soma += nota;
        }
        double media = soma / notas.size();

        System.out.println("A média é: " + media);
        System.out.println("");
        System.out.println("Notas maiores que a média: ");

        for (double nota : notas) {
            if (nota > media) {
                System.out.println(nota);
            }
        }

        System.out.println("Notas menores que a média: ");

        for (double nota : notas) {
            if (nota < media) {
                System.out.println(nota);
            }
        }
        ler.close();
    }
}