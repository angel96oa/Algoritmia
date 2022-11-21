import A_TADLista.Lista;
import A_TADLista.Lista_Dinamica;
import B_TADCola.Cola;
import B_TADCola.Cola_Dinamica;
import D_TADArbol.ArbolGeneral;
import D_TADArbol.ArbolGeneralDinamico;

public class E_UsoArbolesGenerales {

    // Uso de TAD ARBOL GENERAL a Alto Nivel (Desde fuera de la clase)
    public static void main(String[] args) {

        ///////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////
        ////// Arbol General utilizando ArbolGeneralDinamico //////////
        ///////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////            
        System.out.println("Arbol General utilizando ArbolGeneralDinamico: ");
        Cola<ArbolGeneral> cola;

        ArbolGeneral sieteAG = new ArbolGeneralDinamico(7);
        ArbolGeneral seisAG = new ArbolGeneralDinamico(6);
        ArbolGeneral cincoAG = new ArbolGeneralDinamico(5);

        cola = new Cola_Dinamica<>();
        cola.EnCola(cincoAG);
        cola.EnCola(seisAG);
        cola.EnCola(sieteAG);
        ArbolGeneral cuatroAG = new ArbolGeneralDinamico(4, cola);

        ArbolGeneral tresAG = new ArbolGeneralDinamico(3);
        ArbolGeneral dosAG = new ArbolGeneralDinamico(2);

        cola = new Cola_Dinamica<>();
        cola.EnCola(dosAG);
        cola.EnCola(tresAG);
        cola.EnCola(cuatroAG);
        ArbolGeneral unoAG = new ArbolGeneralDinamico(1, cola);

        System.out.println(unoAG);

        

        
        ////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////
        //////////// Arbol General utilizando Listas ///////////////
        ////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////          
        System.out.println("Arbol General utilizando Listas: ");

        Lista sieteL = new Lista_Dinamica(7, new Lista_Dinamica<>()); // [7]
        Lista seisL = new Lista_Dinamica(6, new Lista_Dinamica<>());  // [6]
        Lista cincoL = new Lista_Dinamica(5, new Lista_Dinamica<>()); // [5]

        Lista cuatroL = new Lista_Dinamica();   // []
        cuatroL.Añade(sieteL);                  // [[7]]
        cuatroL.Añade(seisL);                   // [[6], [7]]
        cuatroL.Añade(cincoL);                  // [[5], [6], [7]]
        cuatroL.Añade(4);                       // [4, [5], [6], [7]]      

        Lista tresL = new Lista_Dinamica(3, new Lista_Dinamica<>()); // [3]        
        Lista dosL = new Lista_Dinamica(2, new Lista_Dinamica<>()); // [2]

        Lista unoL = new Lista_Dinamica();      // []
        unoL.Añade(cuatroL);                    // [[4, [5], [6], [7]]]
        unoL.Añade(tresL);                      // [[3], [4, [5], [6], [7]]]
        unoL.Añade(dosL);                       // [[2], [3], [4, [5], [6], [7]]]
        unoL.Añade(1);                          // [1, [2], [3], [4, [5], [6], [7]]]

        System.out.println(unoL);

    }

// <editor-fold desc="EJERCICIOS de Arboles Generales utilizando ArbolGeneralDinamico" defaultstate="collapsed">    

// </editor-fold>   
    
// <editor-fold desc="EJERCICIOS de Arboles Generales utilizando Listas" defaultstate="collapsed">    

// </ editor-fold>
    
// <editor-fold desc="EJERCICIOS AVANZADOS" defaultstate="collapsed">                            

// </editor-fold>    
    
}