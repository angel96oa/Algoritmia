package ClasesAbstractas;

public class Suma extends Operacion {

    //private int x, y;

    public Suma(int x, int y) {
        //this.x = x;
       // this.y = y;
        super(x, y);
    }

    public void tipo() {
        System.out.println("Soy suma");
        super.tipo();
    }

    public void calcular() {
        System.out.println(x + y);
    }
    //los métodos abstractos obligatoriamente se deben de implementar en las subclases de una clase abstracta

}
