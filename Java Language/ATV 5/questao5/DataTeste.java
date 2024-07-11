public class DataTeste {
    public static void main(String[] args) {
        Data data = new Data(12, 25, 2022);
        System.out.print("Data inicial: ");
        data.displayData();

        data.setMes(6);
        data.setDia(15);
        data.setAno(2023);

        System.out.print("Nova data: ");
        data.displayData();
    }
}