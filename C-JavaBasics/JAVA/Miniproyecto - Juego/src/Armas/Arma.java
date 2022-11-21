package Armas;

public abstract class Arma {

    protected static int contador;
    protected int id, daño;

    public Arma(int contador, int id, int daño) {
        contador++;
        this.id = contador++;
        this.daño = daño;
    }

//pon y dame
    
    public int dameId(){
        return id;
    }
    
    public void ponDaño(int daño){
        this.daño = daño;
    }
    
    public int dameDaño(){
        return daño;
    }
    
    public abstract int daño();
}
