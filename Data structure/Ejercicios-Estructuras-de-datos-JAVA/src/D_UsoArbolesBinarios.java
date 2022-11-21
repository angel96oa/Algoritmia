import D_TADArbol.ArbolBinario;
import D_TADArbol.ArbolBinarioDinamico;

public class D_UsoArbolesBinarios {
    
    // Uso de TAD ARBOL BINARIO a Alto Nivel (Desde fuera de la clase)
    public static void main(String[] args) {        
        ArbolBinarioDinamico<Integer> uno = new ArbolBinarioDinamico<>(1);
        ArbolBinarioDinamico<Integer> dos = new ArbolBinarioDinamico<>(2);
        ArbolBinarioDinamico<Integer> tres = new ArbolBinarioDinamico<>(3);
        ArbolBinarioDinamico<Integer> cuatro = new ArbolBinarioDinamico<>(4);
        ArbolBinarioDinamico<Integer> cinco = new ArbolBinarioDinamico<>(5);

        ArbolBinarioDinamico<Integer> subArbol1 = new ArbolBinarioDinamico<>(6, tres, cuatro);
        ArbolBinarioDinamico<Integer> subArbol2 = new ArbolBinarioDinamico<>(7, subArbol1, uno);
        ArbolBinarioDinamico<Integer> subArbol3 = new ArbolBinarioDinamico<>(8, dos, cinco);

        ArbolBinario<Integer> arbol = new ArbolBinarioDinamico<>(9, subArbol2, subArbol3);
    }
 
// <editor-fold desc="EJERCICIOS" defaultstate="collapsed">
       
// </editor-fold>
    
// <editor-fold desc="EJERCICIOS AVANZADOS" defaultstate="collapsed">
    
// </editor-fold>
    
// <editor-fold desc="EJERCICIOS DE CONTROLES" defaultstate="collapsed">
    
// </editor-fold>    
    
// <editor-fold desc="EJERCICIOS DE EXAMENES EXTRAORDINARIOS" defaultstate="collapsed">
    
// </editor-fold>    
    
}