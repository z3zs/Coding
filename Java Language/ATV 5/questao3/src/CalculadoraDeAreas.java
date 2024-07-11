import java.util.Scanner;

abstract class Figura {
    public abstract double calcularArea();

    public void mostrarArea() {
        System.out.println("Área calculada: " + calcularArea());
    }
}

class Circulo extends Figura {
    private double raio;

    public Circulo(double raio) {
        this.raio = raio;
    }

    @Override
    public double calcularArea() {
        return Math.PI * raio * raio;
    }
}

class Quadrado extends Figura {
    private double lado;

    public Quadrado(double lado) {
        this.lado = lado;
    }

    @Override
    public double calcularArea() {
        return lado * lado;
    }
}

class Triangulo extends Figura {
    private double base;
    private double altura;

    public Triangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    @Override
    public double calcularArea() {
        return (base * altura) / 2;
    }
}

public class CalculadoraDeAreas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Escolha a figura:");
        System.out.println("1. Círculo");
        System.out.println("2. Quadrado");
        System.out.println("3. Triângulo");

        int escolha = scanner.nextInt();

        Figura figura;

        switch (escolha) {
            case 1:
                System.out.print("Informe o raio do círculo: ");
                double raio = scanner.nextDouble();
                figura = new Circulo(raio);
                break;
            case 2:
                System.out.print("Informe o lado do quadrado: ");
                double lado = scanner.nextDouble();
                figura = new Quadrado(lado);
                break;
            case 3:
                System.out.print("Informe a base do triângulo: ");
                double base = scanner.nextDouble();
                System.out.print("Informe a altura do triângulo: ");
                double altura = scanner.nextDouble();
                figura = new Triangulo(base, altura);
                break;
            default:
                System.out.println("Escolha inválida");
                return;
        }

        figura.mostrarArea();
    }
}