
import pHerencia.*;
public class Alumno extends Persona{
    
    public int edad; //sobrescritura de atributos - el this hace referencia a esta edad
    
    public void mostrarMiEdad(){
        System.out.println("THIS: " + this.edad);
        this.edad = 20;
        System.out.println("THIS: " + this.edad);
    
    }
    public void mostrarEdades(){
        System.out.println("THIS: " + this.edad);
        System.out.println("SUPER: " + super.edad + "\n");
        
        this.edad = 50;
        
        System.out.println("THIS: " + this.edad);
        System.out.println("SUPER: " + super.edad + "\n");
        
        super.edad = 100;
        System.out.println("THIS: " + this.edad);
        System.out.println("SUPER: " + super.edad + "\n");
    }
    
    //super se refiere a lo heredado
    public void saludar(){ //sobreescritura de metodos
        //System.out.println("Soy alumno");
        super.saludar(); System.out.println("y soy alumno");
    }
    
    public void montarNombres(){
//        System.out.println("THIS: " + this.nombre); //se hereda todo, y si es privado, va a ser privado para todo, por lo que arriba hace falta un pon y dame
//        System.out.println("SUPER: " + super.nombre);
        
        System.out.println("THIS: " + this.dameNombre());
        System.out.println("SUPER: " + super.dameNombre());
    }
    
    public void montarPesos(){
        System.out.println("THIS: " + this.peso);
        System.out.println("SUPER: " + super.peso);
    }
    
    
    
    
}
