public class Banco {

    Correntista c1, c2, c3;

   public Banco(String correntista1, ContaCorrente co1, String correntista2,
                ContaCorrente co2, String correntista3, ContaCorrente co3){

       c1 = new Correntista(correntista1);
       c2 = new Correntista(correntista2);
       c3 = new Correntista(correntista3);
   }

   public Correntista getCorrentista(String nome){
       if(c1.getNome().equals(nome)){
           return c1;
       }
       if(c2.getNome().equals(nome)){
           return c2;
       }
       if(c3.getNome().equals(nome)){
           return c3;
       }
       return null;
   }

   public void debitar(String nomeCorrentista, double valor){
       Debito d = new Debito(valor);
       getCorrentista(nomeCorrentista).getContaCorrente().executarOperacao(d);
   }

   public void creditar(String nomeCorrentista, double valor){
       Credito c = new Credito(valor);
       getCorrentista(nomeCorrentista).getContaCorrente().executarOperacao(c);
   }

   public  double getSaldo(String nomeCorrentista){
       return getCorrentista(nomeCorrentista).getContaCorrente().getSalarioAtual();
   }

   public void transferir(String nomeCorrentistaOrigem, String nomeCorrentistaDestino, double valor){

       debitar(nomeCorrentistaOrigem, valor);
       creditar(nomeCorrentistaDestino, valor);
   }
}