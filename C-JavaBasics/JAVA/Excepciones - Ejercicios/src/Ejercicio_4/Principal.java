package Ejercicio_4;

public class Principal {

    public static void main(String[] args) {
        Persona p = new Persona();

        try {
            p.ponPeso(-34f);
        } catch (NumeroNegativoException e) {
            System.out.println(e);
        }
    }
}
