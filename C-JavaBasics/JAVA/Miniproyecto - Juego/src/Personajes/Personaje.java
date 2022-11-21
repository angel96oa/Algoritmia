package Personajes;

public abstract class Personaje extends Stats {

    public Personaje(String nombre, String historia, int vida, int daño) {
        super(nombre, historia, vida, daño);
    }

    public boolean estaVivo() {
        return this.vida > 0;
    }

    public boolean estaMuerto() {
        return this.vida == 0;
    }

    public abstract int ataquePrimario();

    public abstract int ataqueSecundario();
    public boolean aPrimario;
    public boolean aSecundario;

}
