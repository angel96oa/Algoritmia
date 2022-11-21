package Habilidades;

import java.util.Random;

public class Fuego extends Magia {

    public Fuego(int contador, int daño, int mana) {
        super(contador, daño, mana);
    }

    @Override
    public int daño() {
        Random r = new Random();
        return r.nextInt(this.daño) + 15;
    }

    @Override
    public int mana() {
        this.mana = daño - this.mana;
        return mana;
    }

}
