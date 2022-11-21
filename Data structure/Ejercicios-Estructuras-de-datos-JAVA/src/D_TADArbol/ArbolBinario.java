package D_TADArbol;

import Varios.Excepciones.TADVacioException;

public interface ArbolBinario<E> extends Arbol<E> {

// <editor-fold desc="METODOS ABSTRACTOS" defaultstate="collapsed">      
    /**
     *
     * Devuelve el sub�rbol izquierdo del �rbol binario
     *
     * @return ArbolBinario que es el sub�rbol izquierdo del �rbol
     * @exception TADVacioException
     * @see TADVacioException
     */
    public ArbolBinario<E> SubArbolIzqdo() throws TADVacioException;

    /**
     *
     * Devuelve el sub�rbol derecho del �rbol binario
     *
     * @return ArbolBinario que es el sub�rbol derecho del �rbol
     * @exception TADVacioException
     */
    public ArbolBinario<E> SubArbolDcho() throws TADVacioException;
// </editor-fold> 
    
}