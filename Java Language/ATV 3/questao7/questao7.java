package questao7;
import java.util.ArrayList; 
import java.util.Scanner;

public class questao7 {
    public static void main (String args[]){
        ArrayList <Integer> valores = new ArrayList<>();
        Scanner ler = new Scanner (System.in);

        System.out.println("Insira 5 números inteiros: ");
        for (int i = 0; i < 5; i++){
            valores.add(ler.nextInt());
        }
        
        System.out.println("");
        
        for (int i = 0; i < valores.size(); i++){
            System.out.println(valores.get(i));
            
        }
        ler.close();
    }
}