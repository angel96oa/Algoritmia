package pPersona;

public class Persona {

    private static int contador;
    private String nombre;
    private int edad;
    private float peso;
    private int nIdentificador;

    public Persona() {
        contador++;
        nIdentificador = contador;
        this.nombre = "Sin nombre";
    }

    public Persona(String nombre, int edad) {
        this();
        this.nombre = nombre;
        this.edad = edad;
    }

    public Persona(String nombre, int edad, float peso) {
        this(nombre, edad);
        this.peso = peso;
    }

    public static int dameContador() {
        return contador;
    }

    public String dameNombre() {
        return nombre;
    }

    public void ponNombre(String nombre) {
        this.nombre = nombre;
    }

    public int dameEdad() {
        return this.edad;
    }
    
    public float damePeso(){
        return peso;
    }
    
    public void ponPeso(float peso){
        this.peso = peso;
    }
    
    public int nIdentificador(){
        System.out.println("Contador: " + nIdentificador + "\n");
        return nIdentificador;
    }
    
    public void cambiarEdad(int edad){
        this.edad = edad;
    }
    
    public void imprimir(){
        System.out.println("Nombre: " + nombre + "\n");
        System.out.println("Edad: " + edad + "\n");
        System.out.println("Peso: " + peso + "\n");
        System.out.println("Contador: " + nIdentificador + "\n");
    }
    
    public String toString(){
        String s = new String();
        s = s + "Nombre: " + this.nombre + "\n";
        s = s + "Edad: " + this.edad + "\n";
        s = s + "Peso: " + this.peso + "\n";
        s = s + "Contador: " + this.nIdentificador + "\n";
        return s;
    }
    
    
}