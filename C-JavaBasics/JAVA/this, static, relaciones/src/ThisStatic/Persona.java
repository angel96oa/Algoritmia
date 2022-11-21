package ThisStatic;


public class Persona {

    String nombre;
    int edad;
    private static int contador;
    int nIdentificacion;

    public Persona() {
        contador++;
        nIdentificacion = contador;
        this.nombre = "Sin nombre";
        System.out.println("A");
    }

    public Persona(String nombre) {
        this();
        this.nombre = nombre;
        System.out.println("B");
    }

    public Persona(String nombre, int edad) {
        //this.nombre = nombre;
        this(nombre); //la instruccion this para llamar a otro constructor tiene que ir la primera
        this.edad = edad;
        System.out.println("C");
    }
    
    public static int dameContador(){
     
        return contador;
    }

    public void saluda() {
        System.out.println("Hola sou " + this.nombre);
    }

    public Persona devolverMiPosicionEnMemoria() {
        return this;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof Persona)) {
            return false;
        }
        Persona p = (Persona) obj;

        if (!nombre.equals(p.nombre)) {
            return false;
        }
        if (edad != p.edad) {
            return false;
        }

        //se ponen todos los if necesarios para comparar todos los elementos
        //el equals compara los valores de los atributos
        return true;
    }

}
