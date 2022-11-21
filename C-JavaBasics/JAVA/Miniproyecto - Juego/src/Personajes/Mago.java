package Personajes;

import Armas.Arma;
import java.util.Random;

public class Mago extends Personaje {

    public int magiaFuego;
    public int magiaHielo;

    public Mago(String nombre, String historia, int vida, int daño) {
        super(nombre, historia, vida, daño);
        this.magiaFuego = magiaFuego;
        this.magiaHielo = magiaHielo;
    }

   
    public int ataquePrimario() {
        Random r = new Random();
        int ataquePrimario = r.nextInt() + 5;
        return ataquePrimario;
    }

    @Override
    public int ataqueSecundario() {
        Random r = new Random();
        int Fuego = r.nextInt() + this.magiaFuego;
        return Fuego;
    }
    
    public int ataqueHielo(){
        Random r = new Random();
        int Hielo = r.nextInt() + this.magiaHielo + 10;
        return Hielo;
    }
    
}

