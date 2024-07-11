package questao5;

class Questao5 {
    public static void main (String args[]){
        int lados = 20, colunas = 10;
        int matriz[][] = new int[lados][colunas];
        int somaColunas[] = new int [colunas];
        int multColunas [][] = new int[lados][colunas];

       for (int i = 0; i < lados; i++) {
            for (int j = 0; j < colunas; j++) {
                matriz[i][j] = i * colunas + j + 1;
                somaColunas[j] += matriz[i][j];
            }
       }
       for (int i = 0; i < lados; i++){
            for (int j = 0; j < colunas; j++){
                multColunas [i][j] = somaColunas[j] * matriz[i][j];            
            }
        }    
       for (int i = 0; i < lados; i++){
            for (int j = 0; j < colunas; j++){
                System.out.println(multColunas[i][j]);
            }
        }
    }
}