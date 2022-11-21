package Ejercicio_grande;

public class Profesor extends Persona {

    private String especialidad;

    public Profesor(String nombre, String dni, String especialidad) {
        super(nombre, dni);
        this.especialidad = especialidad;
    }

    public String dameEspecialidad() {
        return this.especialidad;
    }

    public void ponEspecialidad(String especialidad) {
        this.especialidad = especialidad;
    }

    public void ponTodo(String nombre, String dni, String especialidad) {
        super.ponNombre();
        super.ponDni();
        this.especialidad = especialidad;
    }

    public String toString() {
        String s = new String();

        s = s + "Nombre: " + super.dameNombre(s);
        s = s + "dni: " + super.dameDni(s);
        s = s + "Especialidad: " + this.especialidad;

        return s;
    }

}
