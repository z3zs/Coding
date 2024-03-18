package questao3;
public class FaturaTeste {
    public static void main(String[] args) {
        Fatura fatura1 = new Fatura("123", "Mouse sem fio", 2, 25.0);

        System.out.println("Número da Fatura: " + fatura1.getNumero());
        System.out.println("Descrição: " + fatura1.getDescricao());
        System.out.println("Quantidade: " + fatura1.getQuantidade());
        System.out.println("Preço por Item: R$ " + fatura1.getPrecoPorItem());
        System.out.printf("Total da Fatura: R$ %.2f\n", fatura1.getTotalFatura());

        fatura1.setQuantidade(3);
        fatura1.setPrecoPorItem(30.0);

        System.out.println("\nInformações Atualizadas:");
        System.out.println("Quantidade: " + fatura1.getQuantidade());
        System.out.println("Preço por Item: R$ " + fatura1.getPrecoPorItem());
        System.out.printf("Total da Fatura: R$ %.2f\n", fatura1.getTotalFatura());
    }
}