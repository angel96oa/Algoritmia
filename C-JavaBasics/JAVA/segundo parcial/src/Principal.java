import Util.*;
import figuras.*;

public class Principal {

    public static double sumaAcotables(Acotable[] objetos){ //se puede hacer un array de una interfaz
        double res = 0;
        for (int i = 0; i < objetos.length ; i++) {
            res = res + objetos[i].diametro();
        }
        return res;
    }
    
    public static void main(String[] args) {
        
    }
    
    
}
