public abstract class Operacao {
    public double valor;

    public Operacao(double valor){
        this.valor = valor;
    }
   
    public abstract double operar();
    
}