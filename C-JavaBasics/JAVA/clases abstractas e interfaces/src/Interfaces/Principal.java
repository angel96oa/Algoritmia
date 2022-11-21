package Interfaces;

public class Principal {

    public static void main(String[] args) {
        Persona p = new Persona();
        p.nombre = "Jose";
        p.mostrar();
        Suma s = new Suma();
        s.x = 4;
        s.y = 8;
        s.mostrar();
        //-------------------------
        MostrarPantalla[] array = new MostrarPantalla[3];
        array[0] = new Persona();
        array[1] = new Suma();
        array[2] = new Suma();
        for (int i = 0; i < array.length; i++) {
            array[i].mostrar();
        }
        
        
    }
}
