package pPersonas;

public class Profesor extends Empleado {

    private String cargo;

    public Profesor(String nombre, int edad, float peso, int dni, String empresa, String empleo, String cargo) {
        super(nombre, edad, peso, dni, empresa, empleo);
        this.cargo = cargo;
    }

    public void saludo() {
        System.out.println("Mi nombre es " + super.dameNombre() + " y soy profesor");
    }

    public String toString() {

        String s = super.toString();
        s = s + this.cargo;
        return s;
    }

}
