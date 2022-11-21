package D_TADArbol;

import Varios.Excepciones.TADVacioException;

public interface ArbolBusqueda<E extends Comparable<E>> extends ArbolBinario<E> {

// <editor-fold desc="METODOS ABSTRACTOS" defaultstate="collapsed">      
    public ArbolBusqueda<E> SubArbolIzqdo() throws TADVacioException;

    public ArbolBusqueda<E> SubArbolDcho() throws TADVacioException;

    /**
     *
     * Inserta un elemento en el �rbol, y queda com hoja.
     *
     * @param e Elemento a insertar
     * @exception TADVacioException
     */
    public void Inserta(E e);

    /**
     *
     * Extrae un elemento del �rbol.
     *
     * @param e Elemento a extraer.
     */
    public void Extrae(E e);

    /**
     *
     * Devuelve el menor elemento del �rbol. Si es vac�o, se lanza la excepci�n
     * indicada.
     *
     * @exception TADVacioException
     */
    public E Minimo() throws TADVacioException;

    /**
     *
     * Devuelve el mayor elemento del �rbol. Si es vac�o, se lanza la excepci�n
     * indicada.
     *
     * @exception TADVacioException
     */
    public E Maximo() throws TADVacioException;

    /**
     * Devuelve si un elemento pertenece al arbol
     *
     * @param e Elemento a comparar
     * @return true en caso de pertenecer. false en caso contrario.
     */
    public boolean Pertenece(E e);
// </editor-fold> 
    
}