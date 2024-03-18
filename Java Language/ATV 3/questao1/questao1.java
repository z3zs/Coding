package questao1;

import java.util.Scanner;

class Questao1 {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int num[] = new int[2];
        int op = 0;

        for (int i = 0; i < 2; i++) {
            System.out.println("Insira o número " + (i + 1) + ":");
            num[i] = ler.nextInt();
        }
        while (op != 9) {
            System.out.println("********************************");
            System.out.println(
                    "Escolha a operação desejada:\n1.Adição\n2.Subtração\n3.Multiplicação\n4.Divisão\n5.Resto\n9.Parar");
            System.out.println("********************************");
            System.out.println("");
            op = ler.nextInt();

            if (op == 1) {
                System.out.println("O resultado da adição é: " + (num[0] + num[1]));
            } else if (op == 2) {
                System.out.println("O resultado da subtração é: " + (num[0] - num[1]));
            } else if (op == 3) {
                System.out.println("O resultado da multiplicação é: " + (num[0] * num[1]));
            } else if (op == 4) {
                System.out.println("O resultado da divisão é: " + (num[0] / num[1]));
            } else if (op == 5) {
                System.out.println("O resultado do resto é: " + (num[0] % num[1]));
            } else if (op == 9) {
                System.out.println("Parando...");
                break;
            } else {
                System.out.println("Insira um número válido.");
            }
        }
        ler.close();

    }
}