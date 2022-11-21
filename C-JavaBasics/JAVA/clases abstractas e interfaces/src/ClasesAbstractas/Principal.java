package ClasesAbstractas;

public class Principal {

    public static void main(String[] args) {
        Suma s = new Suma(2, 3);
        s.tipo();
        s.calcular();

        Resta r = new Resta(2, 4);
        r.tipo();
        r.calcular();
        
//        Operacion o = new Operacion(8, 1);
//        o.tipo();
//        o.calcular();
        //las clases abstractas no se puede instanciar, es decir, no se puede hacer un new
    
        //Qué se con las clases abstractas?
        Operacion[] operaciones = new Operacion[3];
        operaciones[0] = new Suma(1,2);
        operaciones[1] = new Resta(2,3);
        //operaciones[2] = new Operacion(3,4) este no deja porque el new es de la clase abstracta
        operaciones[2] = new Suma(2,3);
        
        for (int i = 0; i < operaciones.length; i++) {
            operaciones[i].tipo();
            operaciones[i].calcular();
        }
    }

}
