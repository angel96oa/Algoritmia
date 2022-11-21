package Ejercicio_grande;

public class Alumno extends Persona {

    private String curso;
    private float notaFinal;

    public Alumno(String nombre, String dni, String curso) {
        super(nombre, dni);
        this.curso = curso;
    }

    public String dameCurso() {
        return this.curso;
    }

    public void ponCurso(String curso) {
        this.curso = curso;
    }

    public float dameNotaFinal() {
        return this.notaFinal;
    }

    public void ponNotaFinal(float notaFinal) {
        this.notaFinal = notaFinal;
    }

    public void ponTodo(String nombre, String dni, String curso, float notaFinal) {
        super.ponDni();
        super.ponNombre();
        this.curso = curso;
        this.notaFinal = notaFinal;
    }

    public String toString() {
        String s = new String();

        s = s + "nombre: " + super.dameNombre(s);
        s = s + "dni: " + super.dameDni(s);
        s = s + "curso: " + this.curso;
        s = s + "nota final: " + this.notaFinal;

        return s;
    }

}
