package Ejercicio_grande;

public class Persona {

    private String nombre;
    private String dni;

    public Persona(String nombre, String dni) {
        this.dni = dni;
        this.nombre = nombre;
    }

    public String dameNombre(String nombre) {
        return this.nombre;
    }

    public void ponNombre() {
        this.nombre = nombre;
    }

    public void ponDni() {
        this.dni = dni;
    }

    public String dameDni(String dni) {
        return this.dni;
    }

    public void ponTodo(String nombre, String dni) {
        this.nombre = nombre;
        this.dni = dni;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof Persona)) {
            return false;
        }
        Persona p = (Persona) obj;
        if (!(this.nombre.equals(obj))) {
            return false;
        }
        if (!(this.dni.equals(obj))) {
            return false;
        }
        return true;
    }

    public String toString() {
        String s = new String();

        s = s + "Nombre: " + this.nombre + "\n";
        s = s + "dni: " + this.dni + "\n";

        return s;
    }
}
