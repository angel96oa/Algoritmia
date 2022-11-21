package Interfaces;

public class Suma extends Operacion implements MostrarPantalla, OtraInterface {
//Se puede implements más de 1 interface
//no se puede heredar(extends) más de una clase
    int x, y;

    public void mostrar() {
        System.out.println(x + y);
    }
}
