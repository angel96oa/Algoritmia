package D_TADArbol;

import B_TADCola.Cola;
import Varios.Excepciones.TADVacioException;

public interface ArbolGeneral<E> extends Arbol<E> {

// <editor-fold desc="METODOS ABSTRACTOS" defaultstate="collapsed">      
    /**
     * Devuelve el i-ésimo subárbol que nace en la raíz del árbol general.
     *
     * @param i Número del subárbol que devuelve, numerando de izquierda a
     * derecha desde 1.
     * @return i-esimo subárbol si existe, o el árbol general vacío si no
     * existe.
     * @throws TADVacioException si el árbol está vacío.
     */
    public ArbolGeneral<E> Subarbol(int i) throws TADVacioException;

    /**
     * Devuelve todos los suárboles que nacen en la raíz del árbol general.
     *
     * @return Una cola con todos los subárboles.
     * @throws TADVacioException si el árbol está vacío.
     */
    public Cola<ArbolGeneral<E>> Subarboles() throws TADVacioException;

    /**
     * Recorrido en preorden del árbol general.
     *
     * @return Una cola con el recorrido.
     */
    public Cola<E> Preorden();

    /**
     * Recorrido en postorden del árbol general.
     *
     * @return Una cola con el recorrido.
     */
    public Cola<E> Postorden();

    /**
     * Recorrido por niveles del árbol general.
     *
     * @return Una cola con el recorrido.
     */
    public Cola<E> Niveles();

    /**
     * Altura del árbol general.
     *
     * @return Valor de la altura. Devuelve 0 para el árbol vacío.
     */
    public int Altura();

    /**
     * Rama mas larga del árbol general. Una rama es un camino desde la raíz a
     * una hoja.
     *
     * @return Una cola con la rama.
     */
    public Cola<E> Rama();

    /**
     * Rango del árbol general (ramificación másima).
     *
     * @return Una cola con el recorrido.
     */
    public int Rango();

    /**
     * Hojas del árbol general.
     *
     * @return Una cola con las hojas.
     */
    public Cola<E> Hojas();
// </editor-fold>    
    
}