public class Pessoa {
    public String nome;
    public String telefone;
    public String email;
    public String end;

    public Pessoa(String nome, String telefone, String email, String end) {
        this.nome = nome;
        this.telefone = telefone;
        this.email = email;
        this.end = end;
    }

    public String getNome() {
        return nome;
    }

    public String getTelefone() {
        return telefone;
    }

    public String getEmail() {
        return email;
    }

    public String getEnd() {
        return end;
    }
}