package sistema.Sistema;

import java.util.PriorityQueue;
import java.time.LocalTime;

public class FilaBanco {
    private PriorityQueue<Pessoa> pq1;
    private PriorityQueue<Pessoa> pq2;
    private PriorityQueue<Pessoa> pq3;

    public FilaBanco() {
        pq1 = new PriorityQueue<>();
        pq2 = new PriorityQueue<>();
        pq3 = new PriorityQueue<>();
    }
    public void adicionarPessoa(Pessoa pessoa, int fila) {
        switch (fila) {
            case 1:
                pq1.add(pessoa);
                break;
            case 2:
                pq2.add(pessoa);
                break;
            case 3:
                pq3.add(pessoa);
                break;
            default:
                throw new IllegalArgumentException("Fila inválida: " + fila);
        }
    }
    public Pessoa removerPessoa(int fila) {
        switch (fila) {
            case 1:
                return pq1.poll();
            case 2:
                return pq2.poll();
            case 3:
                return pq3.poll();
            default:
                throw new IllegalArgumentException("Fila inválida: " + fila);
        }
    }

    public boolean filaVazia(int fila) {
        switch (fila) {
            case 1:
                return pq1.isEmpty();
            case 2:
                return pq2.isEmpty();
            case 3:
                return pq3.isEmpty();
            default:
                throw new IllegalArgumentException("Fila inválida: " + fila);
        }
    }

    public void imprimirFilas() {
        System.out.println("Fila 1: " + pq1);
        System.out.println("Fila 2: " + pq2);
        System.out.println("Fila 3: " + pq3);
    }
}
