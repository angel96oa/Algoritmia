package Habilidades;
import java.util.Random;
public class Hielo extends Magia {

    public Hielo(int contador, int daño, int mana) {
        super(contador, daño, mana);
    }

    @Override
    public int daño() {
      Random r = new Random();
      return r.nextInt(this.daño) +10;
    }

    @Override
    public int mana() {
        this.mana = daño - this.mana;
        return this.mana;
    }

}
