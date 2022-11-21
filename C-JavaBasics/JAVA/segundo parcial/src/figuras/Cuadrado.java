package figuras;

import Util.Acotable;
import Util.comparable;

public class Cuadrado extends Figura implements Acotable, Comparable {

    public double lado;
    
    

    public Cuadrado(String nombre, Figura figuraFuera, Figura figuraDentro, double lado) {
        super(nombre, figuraFuera, figuraDentro);
        this.lado = lado;
    }

    

    public double Area() {
        double area;
        area = lado * lado;
        return area;
    }

    public double diametro() {
        double diametro;
        diametro = 4 * lado;
        return lado;
    }

    public int compareTo(Object o) {
        if (!(o instanceof Cuadrado)) {
            return 0;
        }
        Cuadrado c = (Cuadrado) o;
        double res = this.lado - c.lado;
        if (res < 0) {
            return -1;
        }
        if (res == 0) {
            return 0;
        } else {
            return 1;
        }
    }

}
