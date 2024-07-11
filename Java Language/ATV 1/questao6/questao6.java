class Questao6 {
	public static void main (String args []) {
		String nome = "Alexandre";
		String sobrenome = "Franco";
		int idadedopai = 0, idadedamae = 0;
		int ano = 1975;
		int idade = 2008 - ano;
		idadedopai += (idadedopai + 28);
		idadedamae = idadedopai - 8;
		
		System.out.println ("Nome: " + nome + " " + sobrenome);
		System.out.println ("Idade da mae: " + idadedamae);
		System.out.println ("e idade do pai: " +idadedopai);
	}
}