package pPersonas;

public class Empleado extends Persona {

    private String empresa;
    private String empleo;

    public Empleado(String nombre, int edad, float peso, int dni, String empresa, String empleo) {
        super(nombre, edad, peso, dni);

        this.empresa = empresa;
        this.empleo = empleo;
    }

    public void saludo() {
        System.out.println("Mi nombre es " + super.dameNombre() + " y soy empleado \n");

    }

    public String toString() {
        String s = super.toString();
        s = s + this.empresa;
        s = s + this.empleo;
        return s;
    }
}
