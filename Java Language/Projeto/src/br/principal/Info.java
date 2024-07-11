package br.principal;

public class Info extends Evento {
    public String responsavel;
    public String oficina;

    public Info(String horario, String responsavel, String oficina) {
        super(horario);
        this.responsavel = responsavel;
        this.oficina = oficina;
    }

    public String getDados() {
        return (horario + " " + oficina + " " + "-" + " " + responsavel);
    }
}