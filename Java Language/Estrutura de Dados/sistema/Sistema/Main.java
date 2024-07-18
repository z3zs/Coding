package sistema.Sistema;

import java.time.LocalTime;
public class Main {
    public static void main(String[] args) {
        FilaBanco banco = new FilaBanco();
        banco.adicionarPessoa(new Pessoa("João", LocalTime.of(9, 0), 1), 1);
        banco.adicionarPessoa(new Pessoa("José", LocalTime.of(9, 5), 2), 1);
        banco.adicionarPessoa(new Pessoa("Jair", LocalTime.of(8, 45), 1), 2);
        banco.adicionarPessoa(new Pessoa("Pedro", LocalTime.of(10, 0), 3), 3);

        banco.imprimirFilas();

        System.out.println("Removendo da Fila 1: " + banco.removerPessoa(1));
        banco.imprimirFilas();
    }
}