import java.util.Scanner;

class Questao9 {
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);
		
		System.out.println ("Insira cinco números: ");
		
		for (int i = 0; i < 5; i++) {
			int numero = ler.nextInt();

			int quad = numero * numero;

			System.out.println ("O quadrado de " + numero + " é " + quad);
		}
		
	}
}
		
	
