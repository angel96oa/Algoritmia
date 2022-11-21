package D_TADArbol;

import Varios.Excepciones.TADVacioException;

/**
 * Interfaz general de �rboles.
 *
 * @param <E>
 */
public interface Arbol<E> {

// <editor-fold desc="METODOS ABSTRACTOS" defaultstate="collapsed">      
    /**
     *
     * Devuelve true si el �rbol no contiene nodos.
     *
     * @return boolean true si el �rbol es vac�o
     */
    public boolean EsVacio();

    /**
     *
     * Devuelve el Elemento contenido en el nodo ra�z del �rbol. En caso de que
     * no exista tal elemento por estar vac�o el �rbol, se lanza la excepci�n
     * apropiada
     *
     * @return Elemento en la ra�z del �rbol
     * @exception TADVacioException
     */
    public E Raiz() throws TADVacioException;

    /**
     *
     * Obtiene un duplicado del �rbol, sin clonar los elementos.
     *
     * @return un Object que es un clon del �rbol
     */
    public Object clone();

    /**
     *
     * Pasa el �rbol a formato String.
     *
     * @return un String con la informaci�n del �rbol
     */
    public String toString();

    /**
     *
     * Compara con otro objeto.
     *
     * @param o Objeto con el que se compara.
     * @return true si el objeto es un �rbol y coincide con this elemento a
     * elemento
     */
    public boolean equals(Object o);
// </editor-fold> 
    
}