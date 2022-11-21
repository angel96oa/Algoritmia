package pPersona;

public class Persona {

    public static int contador;
    private String nombre;
//    private Libro l;
    private int edad;
    

    public Persona() {
        contador++;
        nombre = "Sin nombre";
    }

    public Persona(String nombre, int edad) {
        this();
        this.edad = edad;
        this.nombre = nombre;
    }

    public String dameNombre() {
        return nombre;
    }

    public void ponNombre(String nombre) {
        this.nombre = nombre;
    }
    
    public int dameEdad() {
        return edad;
    }

    public void ponEdad(int edad) {
        this.edad = edad;
    }
    
    

    public String toString() {
        String s = new String();
        s = s + "Nombre: " + nombre + "\n";
        s = s + "Edad: " + edad + "\n";
        return s;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof Persona)) {
            return false;
        }
        Persona p = (Persona)obj;

        // cualquier objeto, string es un objeto, se compara con el equals
        if (!p.nombre.equals(this.nombre)) {
            return false;
        }
        
        // cualquier tipo simple: int, boolean, double, float, char
        if (p.edad != this.edad) {
            return false;
        }
//        if (!p.l.equals(this.l)) {
//            return false;
//        }

        return true;

    }
}
