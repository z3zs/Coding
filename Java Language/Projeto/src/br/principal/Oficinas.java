package br.principal;

public class Oficinas extends Evento implements Dados {
    public String responsavel;
    public String detalhes;

    public Oficinas(String horario, String responsavel, String detalhes) {
        super(horario);
        this.responsavel = responsavel;
        this.detalhes = detalhes;

    }

    public String getDetalhes() {
        return ("Horário: " + horario + "\n" + "Responsável: " + responsavel + "\n" + "Detalhes: " + detalhes);
    }

    public void getDadosGerais() {
        System.out.println(horario + responsavel + detalhes);
    }
}
