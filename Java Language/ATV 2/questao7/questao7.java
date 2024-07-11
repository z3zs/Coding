import java.util.Scanner;

class Questao7 {
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);

		int x = 0;
		int num = 0;
		int num3;
		
		while (num != -999){
			System.out.println ("Insira um número (digite -999 para parar): ");
			num = ler.nextInt();
			num3 = num * 3;
			if (num != -999){
				System.out.println ("O triplo desse número é "+ num3);
				x++;
			}
			else if (num == -999){
				System.out.println ("Parando algoritmo...");
			}
		}
	}
}
			