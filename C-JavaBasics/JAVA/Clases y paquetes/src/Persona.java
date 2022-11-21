
public class Persona {

    //Atributos -> inicializados por defecto
    private String nombre;
    private int edad;

    //Constructores
    // el constructor vcio esta por defecto en caso de que no exista otro
    public Persona() {
        System.out.println("A");
    }

    public Persona(int e) {
        if (e > 0) {
            edad = e;
        }
        System.out.println("B");
    }

    public Persona(String n, int e) {
        nombre = n;

        if (e > 0) {
            edad = e;
        }
        System.out.println("C");
    }
//Métodos pon y dame

    public void ponEdad(int e) {
        if (e > 0) {
            edad = e;
        }
    }

    public int dameEdad() {
        return edad;
    }

    //Métodos especiales
    public String toString() {
        String s = new String();
        s = s + "Nombre: " + nombre + "\t";
        s = s + "edad: " + edad + "\n";
        return s;
    }
    
    
    // Otros metodos
    
    public void saluda(){
        System.out.println("hola soy " + nombre);
    }
    
}
