import java.util.Scanner;

class Questao3 {
	public static void main (String args[]){
		int num;
		Scanner ler = new Scanner(System.in);
		
		System.out.println ("Insira um número: ");
		num = ler.nextInt();
		
		if (num % 2 == 0){
			System.out.println ("O número é par. ");
		}
		else {
			System.out.println ("O número é impar. ");
		}
	}
}
		