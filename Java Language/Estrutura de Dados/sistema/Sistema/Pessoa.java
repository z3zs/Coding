package sistema.Sistema;

import java.time.LocalTime;

public class Pessoa implements Comparable<Pessoa> {
    private String nome;
    private LocalTime horarioChegada;
    private int nivelPrioridade;

    public Pessoa(String nome, LocalTime horarioChegada, int nivelPrioridade) {
        this.nome = nome;
        this.horarioChegada = horarioChegada;
        this.nivelPrioridade = nivelPrioridade;
    }

    public LocalTime getHorarioChegada() {
        return horarioChegada;
    }

    public void setHorarioChegada(LocalTime horarioChegada) {
        this.horarioChegada = horarioChegada;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getNivelPrioridade() {
        return nivelPrioridade;
    }

    public void setNivelPrioridade(int nivelPrioridade) {
        this.nivelPrioridade = nivelPrioridade;
    }

    @Override
    public int compareTo(Pessoa outra) {
        if (this.nivelPrioridade != outra.nivelPrioridade) {
            return Integer.compare(this.nivelPrioridade, outra.nivelPrioridade);
        } else {
            return this.horarioChegada.compareTo(outra.horarioChegada);
        }
    }

    @Override
    public String toString() {
        return "Pessoa{" +
                "nome='" + nome + '\'' +
                ", horarioChegada=" + horarioChegada +
                ", nivelPrioridade=" + nivelPrioridade +
                '}';
    }
}
