
public class Alumno extends Persona {
float nota;
    public Alumno() {
        super(); //por defecto, si no hay otro
        System.out.println("A1");
    }

    public Alumno(String nombre, int edad) {
        super(nombre, edad);
        System.out.println("A2");
    }
    public Alumno(String nombre, int edad, float nota){
        this(nombre, edad);
        this.nota = nota;
    }
}
