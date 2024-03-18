import java.util.Scanner;

class Questao5 {
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);
		double altura, peso = 0;
		String sexo;
		
		System.out.println ("Insira sua altura (em metros): ");
		altura = ler.nextDouble();

		System.out.println ("Insira seu sexo (masculino ou feminino): ");
		sexo = ler.next();
		
		if (sexo.equalsIgnoreCase("Masculino")){
			peso = (72.7 * altura) - 58;
		}
		else if (sexo.equalsIgnoreCase("Feminino")){
			peso = (62.1 * altura) - 44.7;
		}
		else {
			System.out.println ("Insira um sexo válido (masculino ou feminino)");
		}
		
		System.out.println ("Seu peso ideal é: " + peso + " kg.");
	}
}		
		