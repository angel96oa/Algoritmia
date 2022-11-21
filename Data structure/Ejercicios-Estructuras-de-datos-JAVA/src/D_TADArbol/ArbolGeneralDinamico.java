package D_TADArbol;

import B_TADCola.Cola;
import B_TADCola.Cola_Dinamica;
import Varios.Excepciones.TADVacioException;

public class ArbolGeneralDinamico<E> implements ArbolGeneral<E> {

// <editor-fold desc="ATRIBUTOS" defaultstate="collapsed">                 
    private E raiz;
    private Cola<ArbolGeneral<E>> subarboles;
// </editor-fold>

// <editor-fold desc="CONSTRUCTORES" defaultstate="collapsed">                 
    public ArbolGeneralDinamico() {
        subarboles = new Cola_Dinamica<>();
    }

    public ArbolGeneralDinamico(E raiz) {
        this();
        this.raiz = raiz;
    }

    public ArbolGeneralDinamico(E raiz, Cola<ArbolGeneral<E>> subarboles) {
        this.raiz = raiz;
        this.subarboles = subarboles;
    }
// </editor-fold>    

// <editor-fold desc="METODOS YA IMPLEMENTADOS" defaultstate="collapsed">                 
    @Override
    public E Raiz() throws TADVacioException {
        return raiz;
    }

    @Override
    public Cola<ArbolGeneral<E>> Subarboles() throws TADVacioException {
        return subarboles;
    }

    @Override
    public boolean EsVacio() {
        return this.raiz == null;
    }

    @Override
    public ArbolGeneral<E> Subarbol(int i) throws TADVacioException {
        if (i < 0) {
            return null;
        }

        Cola<ArbolGeneral<E>> aux = subarboles;
        while (i > 0) {
            aux = aux.Resto();
            i--;
        }

        return aux.Cabeza();
    }

    @Override
    public Cola<E> Preorden() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public Cola<E> Postorden() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public Cola<E> Niveles() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public int Altura() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public Cola<E> Rama() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public int Rango() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public Cola<E> Hojas() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public Object clone() {
        throw new UnsupportedOperationException("No implementado.");
    }

    @Override
    public String toString() {
        String salida = new String();

        Cola<ArbolGeneral<E>> copia = (Cola<ArbolGeneral<E>>) subarboles.clone();

        if (this.raiz != null) {
            salida = "[" + this.raiz;

            try {
                while (!copia.EsVacia()) {
                    salida = salida + ", " + copia.Cabeza().toString();

                    copia = copia.Resto();
                }
            } catch (TADVacioException e) {
                return null;
            }

            salida = salida + "]";
        }

        return salida;
    }
// </editor-fold>
 
/*
    IMPLEMENTACIONES DEL CURSO
*/
    
// <editor-fold desc="EJERCICIOS" defaultstate="collapsed">
       
// </editor-fold>  
    
}