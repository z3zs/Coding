public class Data {
    private int mes;
    private int dia;
    private int ano;

    public Data(int mes, int dia, int ano) {
        setMes(mes);
        setDia(dia);
        setAno(ano);
    }

    public int getMes() {
        return mes;
    }

    public void setMes(int mes) {
        if (mes >= 1 && mes <= 12) {
            this.mes = mes;
        } else {
            throw new IllegalArgumentException("Mês inválido. Deve ser entre 1 e 12.");
        }
    }

    public int getDia() {
        return dia;
    }

    public void setDia(int dia) {
        if (dia >= 1 && dia <= 31) {
            this.dia = dia;
        } else {
            throw new IllegalArgumentException("Dia inválido. Deve ser entre 1 e 31.");
        }
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        if (ano > 0) {
            this.ano = ano;
        } else {
            throw new IllegalArgumentException("Ano inválido. Deve ser maior que 0.");
        }
    }

    public void displayData() {
        System.out.printf("%d/%d/%d%n", getMes(), getDia(), getAno());
    }
}