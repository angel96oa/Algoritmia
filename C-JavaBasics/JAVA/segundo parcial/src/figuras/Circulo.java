package figuras;

import Util.Acotable;

public class Circulo extends Figura implements Acotable {

    public double radio;

    public Circulo(String nombre, Figura figuraFuera, Figura figuraDentro, double radio) {
        super(nombre, figuraFuera, figuraDentro);
        this.radio = radio;
    }

    public double Area() {
        double area = 2 * Math.PI * radio * radio;
        return area;
    }

  
    public double diametro() {
        double diametro;
        diametro = 2 * Math.PI * radio;
        return diametro;
    }

}
