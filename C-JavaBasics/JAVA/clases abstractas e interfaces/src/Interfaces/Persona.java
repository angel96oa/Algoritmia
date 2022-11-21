package Interfaces;

public class Persona implements MostrarPantalla {
//interfaces se usan para distintas familias
    String nombre;

    public void mostrar() {
        System.out.println("Mi nombre es: " + nombre);
    }
}
