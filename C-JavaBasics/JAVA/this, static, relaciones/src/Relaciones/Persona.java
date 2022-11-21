package Relaciones;

public class Persona {

    int edad;
    private Libro diario;
    
    public void ponDiario(Libro diario){
        this.diario = diario;
    }
    public Libro dameDiario(){
        return this.diario;
    }
}
