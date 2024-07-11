abstract class Calculadora {
    public abstract double somar(double a, double b);

    public abstract double subtrair(double a, double b);

    public abstract double multiplicar(double a, double b);

    public abstract double dividir(double a, double b);
}

class CalculadoraCientifica extends Calculadora {
    @Override
    public double somar(double a, double b) {
        return a + b;
    }

    @Override
    public double subtrair(double a, double b) {
        return a - b;
    }

    @Override
    public double multiplicar(double a, double b) {
        return a * b;
    }

    @Override
    public double dividir(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            throw new ArithmeticException("Divisão por zero não é permitida.");
        }
    }

    public double calcularRaizQuadrada(double a) {
        return Math.sqrt(a);
    }

    public double calcularPotencia(double base, double expoente) {
        return Math.pow(base, expoente);
    }
}