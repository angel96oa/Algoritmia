package Armas;

import java.util.Random;

public class Bastón extends Arma {
    public int fuego;
    public int hielo;

    public Bastón(int contador, int id, int daño, int fuego, int hielo) {
        super(contador, id, daño);
        this.fuego = fuego;
        this.hielo = hielo;
    }

    @Override
    public int daño() {
        Random r = new Random();
        return r.nextInt(this.daño) +5;
    }
    public int magiaFuego(){
        Random f = new Random();
        return f.nextInt( - this.fuego)+10;
    }
    public int magiaHielo(){
        Random h = new Random();
            return h.nextInt(this.hielo)+10;
        }
    }


