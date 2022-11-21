package pPersonas;

public class Alumno extends Persona {

    String curso;

    public Alumno(String nombre, int edad, float peso, int dni, String curso) {
        super(nombre, edad, peso, dni);
        this.curso = curso;

    }

    public void saludo() {
        System.out.println("Mi nombre es " + super.dameNombre() + " y soy un alumno \n");
    }

    public String toString() {
        
        String s = super.toString();
        s = s + this.curso;

        return s;
    }

}
