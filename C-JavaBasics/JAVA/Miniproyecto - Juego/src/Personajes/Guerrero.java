package Personajes;

import java.util.Random;
import Armas.Espada;

public class Guerrero extends Personaje {

    public Guerrero(String nombre, String historia, int vida, int daño) {
        super(nombre, historia, vida, daño);
    }

    public int ataquePrimario() {

      Random r = new Random();
        int golpe = r.nextInt(this.daño) +10;
        return golpe;
    }

    public int ataqueSecundario() {
Random r = new Random();
        int golpe = r.nextInt(this.daño);
        return daño;
    }

    
}
