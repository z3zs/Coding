package br.principal;

abstract class Evento {

    protected String horario;

    public Evento(String horario) {
        this.horario = horario;
    }
}