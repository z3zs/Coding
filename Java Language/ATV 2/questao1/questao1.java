import java.util.Scanner;

class Questao1 {
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);
		int valor;
		
		System.out.println ("Insira o valor que receberá o desconto: ");
		valor = ler.nextInt();

		double desconto = valor - (valor * 0.09);
		
		System.out.println ("O valor com desconto foi de R$ " + desconto);
		ler.close();
	}
}
		
			
		