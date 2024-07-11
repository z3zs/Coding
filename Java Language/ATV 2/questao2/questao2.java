import java.util.Scanner;
class Questao2 {
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);
		int velocidade, tempo;
		
		System.out.println ("Insira o tempo gasto na viagem (horas): ");
		tempo = ler.nextInt();
		
		System.out.println ("Insira a velocidade média em Km/h: ");
		velocidade = ler.nextInt();

		int distancia = tempo * velocidade;
		int consumo = distancia / 12;

		System.out.println ("O consumo foi de " + consumo + " litros.");
	}
}
		
		

		