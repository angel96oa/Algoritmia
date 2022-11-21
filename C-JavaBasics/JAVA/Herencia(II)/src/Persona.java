
public class Persona {

    private String nombre;
    private int edad;

    public Persona() {
        System.out.println("P1");
    }

    public Persona(int edad) {
        this();
        System.out.println("P2");
    }

    public Persona(String nombre, int edad) {
        this(edad);
        System.out.println("P3");
    }

}
