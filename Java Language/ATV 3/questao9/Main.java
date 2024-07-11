public class Main {
    public static void main(String args[]) {
        Pessoa minhaPessoa = new Pessoa("Kevy", "75 99199-9900", "kevycosta@hotmail.com", "Campinas - SP");

        String nome = minhaPessoa.getNome();
        String tel = minhaPessoa.getTelefone();
        String email = minhaPessoa.getEmail();
        String end = minhaPessoa.getEnd();

        System.out.println("Os dados são:\n" + "Nome: " + nome + "\n" + "Tel: " + tel + "\n" + "Email: " + email + "\n"
                + "Endereço: " + end);

    }
}
