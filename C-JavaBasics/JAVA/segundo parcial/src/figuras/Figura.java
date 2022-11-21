package figuras;

public abstract class Figura {

    public String nombre;
    Figura figuraFuera;
    Figura figuraDentro;

    public Figura(String nombre, Figura figuraFuera, Figura figuraDentro) {
        this.nombre = nombre;

        if (figuraFuera != null) {
            this.figuraFuera = figuraFuera;
            this.figuraFuera.figuraDentro = this;
        }

        if (figuraDentro != null) {
            this.figuraDentro = figuraDentro;
            this.figuraDentro.figuraFuera = this;
        }
    }

    public abstract double Area();

    public String toString() {
        String s = new String();

        s = s + "Nombre: " + this.nombre + "\n";
        if (figuraFuera != null) {

            s = s + "Figura Fuera: " + this.figuraFuera.toString() + "\n";
        }
        if (figuraDentro != null) {
            s = s + "Figura dentro: " + this.figuraDentro.toString() + "\n";
        }
        return s;
    }

}
