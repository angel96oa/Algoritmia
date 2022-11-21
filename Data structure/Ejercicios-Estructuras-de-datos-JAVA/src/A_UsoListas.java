import A_TADLista.Lista;
import A_TADLista.Lista_Dinamica;

public class A_UsoListas {

    // Uso de TAD LISTA a Alto Nivel (Desde fuera de la clase)
    public static void main(String[] args) {
        Lista<Integer> l = new Lista_Dinamica<>();

        for (int i = 1; i < 5; i++) {
            l.Añade(i); // o bien l.Añade(i). Java transforma 
        }                                 // int a Integer (y viceversa).

        System.out.println("Lista : " + l);
    }
    
// <editor-fold desc="EJERCICIOS" defaultstate="collapsed">
// </editor-fold>    
    
// <editor-fold desc="EJERCICIOS DE CONTROLES" defaultstate="collapsed"> 
// </editor-fold>     
    
// <editor-fold desc="EJERCICIOS DE EXAMENES EXTRAORDINARIOS" defaultstate="collapsed">
// </editor-fold>         

}