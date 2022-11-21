package pHerencia;

public class Persona {

    public int edad; //todo el mundo
    private String nombre; //nadie ( a no ser que se use un metodo)
    protected float peso; //si no tiene ni public ni private es solo visibilidad de paquete, es decir, solo lo pueden usar las clases que tengan ese paquete
    //El protected es para heredar la visibilidad de paquete
    public void saludar(){
        System.out.println("Soy persona");
    }
    public String dameNombre(){
        return this.nombre;
    }
    
    
}
