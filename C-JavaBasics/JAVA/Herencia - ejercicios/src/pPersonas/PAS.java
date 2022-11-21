package pPersonas;

public class PAS extends Empleado {

    public PAS(String nombre, int edad, float peso, int dni, String empleo, String empresa){
       super(nombre, edad, peso, dni, empleo, empresa);
    }
    public void saludo(){
        System.out.println("Mi nombre es " + super.dameNombre() + " y soy PAS \n");
    }
    
    public String toString() {

        String s = super.toString();
        
        return s;
    }
    
    
}
