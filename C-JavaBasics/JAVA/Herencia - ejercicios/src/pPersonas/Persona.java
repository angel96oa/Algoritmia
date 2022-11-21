package pPersonas;

public class Persona {

    private String nombre;
    private int edad;
    private float peso;
    private int dni;

    public Persona(String nombre, int edad, float peso, int dni) {
        this.nombre = nombre;
        this.edad = edad;
        this.peso = peso;
        this.dni = dni;
    }

    public String dameNombre() {
        return nombre;
    }

    public void saludo() {
        System.out.println("Mi nombre es " + this.nombre + " y soy una persona \n");
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof Persona)) {
            return false;
        }
        Persona p = (Persona) obj;
        if (this.dni != p.dni) {
            return false;
        }
        return true;
    }

    public String toString() {
        String s = new String();
        s = s + "Nombre: " + this.nombre + "\n";
        s = s + "Edad: " + this.edad + "\n";
        s = s + "Peso: " + this.peso + "\n";
        s = s + "dni: " + this.dni + "\n";
        
        return s;
    }

}
