package ClasesAbstractas;

public class Resta extends Operacion {

   // private int x, y;

    public Resta(int x, int y) {
        //this.x = x;
       // this.y = y;
        super(x, y);
    }

    public void tipo() {
        System.out.println("Soy resta");
        super.tipo();
    }

    public void calcular() {
        System.out.println(x - y);
    }
}
