public class TesteCalculadora {
    public static void main(String[] args) {
        CalculadoraCientifica calcCientifica = new CalculadoraCientifica();

        System.out.println("Soma: " + calcCientifica.somar(5, 3));
        System.out.println("Subtração: " + calcCientifica.subtrair(8, 4));
        System.out.println("Multiplicação: " + calcCientifica.multiplicar(2, 6));

        try {
            System.out.println("Divisão: " + calcCientifica.dividir(10, 2));
            System.out.println("Divisão por zero: " + calcCientifica.dividir(5, 0));
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }

        System.out.println("Raiz Quadrada: " + calcCientifica.calcularRaizQuadrada(16));
        System.out.println("Potência: " + calcCientifica.calcularPotencia(2, 3));
    }
}