class Questao4 {
    public static void main(String args[]) {
        int linhas = 2, colunas = 5;
        int elementos[][] = new int[linhas][colunas];

        int valor = 1;

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                elementos[i][j] = valor;
                valor++;
            }
        }
        
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                System.out.println(elementos[i][j]);
            }
        }
    }
}