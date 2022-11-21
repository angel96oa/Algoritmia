package Armas;
import java.util.Random;

public class Espada extends Arma {

    public Espada(int contador, int id, int daño) {
        super(contador, id, daño);
    }

    @Override
    public int daño() {
        Random r = new Random();
        return r.nextInt(this.daño) +20;
    }

}
