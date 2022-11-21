package Habilidades;

public abstract class Magia {

    protected static int contador;
    protected int id, daño, mana;

    public Magia(int contador, int daño, int mana) {
        contador++;
        this.id = contador;
        this.daño = daño;
        this.mana = mana;
    }

//pon y dame
    public int dameId() {
        return id;
    }

    public void ponDaño(int daño) {
        this.daño = daño;
    }

    public int dameDaño() {
        return daño;
    }

    public void ponMana(int mana) {
        this.mana = mana;
    }

    public int dameMana() {
        return mana;
    }

    public abstract int daño();
    public abstract int mana();
}
