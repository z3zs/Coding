import java.util.Scanner;

class Questao6 {
	public static void main (String args[]){
		Scanner ler = new Scanner(System.in);
		
		int mes;
		
		System.out.println ("Insira o número do mês: ");
		mes = ler.nextInt();
		
		if (mes == 1){
			System.out.println ("O mês é Janeiro.");
		}
		else if (mes == 2){
			System.out.println ("O mês é Fevereiro.");
		}
		else if (mes == 3){
			System.out.println ("O mês é Março.");
		}
		else if (mes == 4){
			System.out.println ("O mês é Abril.");
		}
		else if (mes == 5){
			System.out.println ("O mês é Maio.");
		}
		else if (mes == 6){
			System.out.println ("O mês é Junho.");
		}
		else if (mes == 7){
			System.out.println ("O mês é Julho.");
		}
		else if (mes == 8){
			System.out.println ("O mês é Agosto.");
		}
		else if (mes == 9){
			System.out.println ("O mês é Setembro.");
		}
		else if (mes == 10){
			System.out.println ("O mês é Outubro.");
		}
		else if (mes == 11){
			System.out.println ("O mês é Novembro.");
		}
		else if (mes == 12){
			System.out.println ("O mês é Dezembro.");
		}
		else {
			System.out.println ("Insira um número válido (1 a 12).");
		}
	}
}
