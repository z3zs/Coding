import java.util.Scanner;

class Questao4 {
	public static void main (String args[]){
		int num, num2, soma;
		Scanner ler = new Scanner(System.in);
		
		System.out.println ("Insira um número: ");
		num = ler.nextInt();

		System.out.println ("Insira um número: ");
		num2 = ler.nextInt();

		soma = num + num2;
		
		if (soma > 20){
			soma = soma + 8;
			System.out.println ("O valor é " + soma);
		}
		
		else if (soma <= 20){
			soma = soma - 5;
			System.out.println ("O valor é " + soma);
		}
	}
}
		