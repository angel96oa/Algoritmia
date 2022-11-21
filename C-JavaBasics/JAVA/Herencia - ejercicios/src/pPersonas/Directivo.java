package pPersonas;

public class Directivo extends Profesor {

    public Directivo(String nombre, int edad, float peso, int dni, String empresa, String empleo, String cargo) {
        super(nombre, edad, peso, dni, empresa, empleo, cargo);
    }

    public void saludo() {
        System.out.println("Mi nombre es " + super.dameNombre() + " y soy directivo \n");
    }
    public String toString() {

        String s = super.toString();
        
        return s;
    }
}
