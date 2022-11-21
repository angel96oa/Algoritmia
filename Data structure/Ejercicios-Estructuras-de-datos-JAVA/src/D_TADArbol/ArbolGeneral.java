package D_TADArbol;

import B_TADCola.Cola;
import Varios.Excepciones.TADVacioException;

public interface ArbolGeneral<E> extends Arbol<E> {

// <editor-fold desc="METODOS ABSTRACTOS" defaultstate="collapsed">      
    /**
     * Devuelve el i-�simo sub�rbol que nace en la ra�z del �rbol general.
     *
     * @param i N�mero del sub�rbol que devuelve, numerando de izquierda a
     * derecha desde 1.
     * @return i-esimo sub�rbol si existe, o el �rbol general vac�o si no
     * existe.
     * @throws TADVacioException si el �rbol est� vac�o.
     */
    public ArbolGeneral<E> Subarbol(int i) throws TADVacioException;

    /**
     * Devuelve todos los su�rboles que nacen en la ra�z del �rbol general.
     *
     * @return Una cola con todos los sub�rboles.
     * @throws TADVacioException si el �rbol est� vac�o.
     */
    public Cola<ArbolGeneral<E>> Subarboles() throws TADVacioException;

    /**
     * Recorrido en preorden del �rbol general.
     *
     * @return Una cola con el recorrido.
     */
    public Cola<E> Preorden();

    /**
     * Recorrido en postorden del �rbol general.
     *
     * @return Una cola con el recorrido.
     */
    public Cola<E> Postorden();

    /**
     * Recorrido por niveles del �rbol general.
     *
     * @return Una cola con el recorrido.
     */
    public Cola<E> Niveles();

    /**
     * Altura del �rbol general.
     *
     * @return Valor de la altura. Devuelve 0 para el �rbol vac�o.
     */
    public int Altura();

    /**
     * Rama mas larga del �rbol general. Una rama es un camino desde la ra�z a
     * una hoja.
     *
     * @return Una cola con la rama.
     */
    public Cola<E> Rama();

    /**
     * Rango del �rbol general (ramificaci�n m�sima).
     *
     * @return Una cola con el recorrido.
     */
    public int Rango();

    /**
     * Hojas del �rbol general.
     *
     * @return Una cola con las hojas.
     */
    public Cola<E> Hojas();
// </editor-fold>    
    
}