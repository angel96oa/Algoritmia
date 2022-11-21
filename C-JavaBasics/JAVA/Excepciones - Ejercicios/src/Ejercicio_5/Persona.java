package Ejercicio_5;

public class Persona {

    private float peso;
    private int edad;

    public Persona() {

    }

    public Persona(float peso) {

        this.peso = peso;
    }
 
    public void ponPeso(float peso) {
        this.peso = peso;
    }

    public float damePeso() {
        return peso;
    }
    
    public void ponEdad() throws NumeroNegativoException{
        try{
            
        }catch(ArithmeticException e){
            
        }
        
    }
    
    public int dameEdad(){
        return this.edad;
    }

}
