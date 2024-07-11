import java.util.Scanner;

class Agenda {
    public static void main (String args[]){
        Scanner ler = new Scanner(System.in);
        String telefone[], nome[];
        telefone = new String[10];
        nome = new String[10];

        for (int i = 0; i < 10; i++){
            System.out.println ("Insira o nome " + (i + 1) + ":");
            nome[i] = ler.nextLine();
        }    
        for (int i = 0; i < 10; i++){ 
            System.out.println ("Insira o telefone " + (i + 1) + ":");
            telefone[i] = ler.nextLine();
        }
        for (int i = 0; i < 10; i++) {
            System.out.println ("Nome "+ (i + 1) + ": " + nome [i] + "\nTel: " + telefone[i]);
        }
        ler.close();
    }
}