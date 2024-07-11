import java.util.Scanner;
	
class Questao8 {	
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);
		
		while (true){
			int num;
	
			System.out.println ("Insira um número: ");
			num = ler.nextInt();
			
			int quad = num * num;
			
			System.out.println ("O quadrado de " + num + " é " + quad);

			if (num % 6 == 0){
				System.out.println (num + " é um multiplo de 6. \nParando o programa...");
				break;
			}
		}
	}
}
		
		
		
