package ClasesAbstractas;

public abstract class Operacion {
int x, y;
public Operacion(int x, int y){
    this.x = x;
    this.y = y;
}
public void tipo(){
    System.out.println("Soy operacion");
}

public abstract void calcular();
//cualquier clase que tenga un metodo abstracto, debe de ser abstracta
//el metodo abstracto no debe de tener cuerpo
}

