import java.util.Scanner;

class Questao11 {
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);

		System.out.println ("Insira a quantidade de números: ");
		int n = ler.nextInt();
		
		if (n <= 0){
			System.out.println ("Insira um numero maior que 0.");	
		}
		else {
			System.out.println ("Insira os números: ");
			
			int maior = ler.nextInt();
			
			for (int i = 1; i < n; i++){
				int num = ler.nextInt();
				
				if (num > maior) {
					maior = num;
				}
			}
			
			System.out.println ("O maior número é " + maior);
		}
	}
}
				