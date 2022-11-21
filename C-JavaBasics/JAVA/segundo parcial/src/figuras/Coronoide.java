package figuras;

import Util.Acotable;

public class Coronoide extends Circulo {

    public Coronoide(String nombre, Figura figuraFuera, Figura figuraDentro, double radio) {
        super(nombre, figuraFuera, null, radio);

        if (figuraDentro.figuraFuera == null && figuraDentro instanceof Circulo && this.diametro() > ((Acotable) figuraDentro).diametro()) {
            this.figuraDentro = figuraDentro;
            this.figuraDentro.figuraFuera = this;
        }
    }

    public double Area() {
        double area;
        area = (radio * radio) - (figuraDentro.Area());
        return area;
    }

    public double diametro() {
        double diametro;
        diametro = 2 * Math.PI * radio;
        return diametro;
    }

}
