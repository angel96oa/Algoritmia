package D_TADArbol;

import Varios.Nodos.NodoArbol;
import Varios.Excepciones.TADVacioException;

public class ArbolBinarioDinamico<E> implements ArbolBinario<E>, Cloneable {

// <editor-fold desc="ATRIBUTOS" defaultstate="collapsed">             
    NodoArbol<E> raiz;     // Ra?z del ?rbol binario
// </editor-fold>    

// <editor-fold desc="CONTRUCTORES" defaultstate="collapsed">             
    public ArbolBinarioDinamico() { // Crea un ?rbol vac?o
        raiz = null;
    }

    public ArbolBinarioDinamico(E e) { // Crea un ?rbol con e como ra?z 
        raiz = new NodoArbol<E>(e, null, null);
    }

    ArbolBinarioDinamico(NodoArbol<E> n) {
        raiz = n;
    }

    public ArbolBinarioDinamico(E x, ArbolBinarioDinamico<E> i, ArbolBinarioDinamico<E> d) {
        // Crea un ?rbol que tiene en el nodo ra?z el valor x, y
        // tiene como hijo izquierdo el sub?rbol iz, y como hijo
        // derecho el sub?rbol de (Operaci?n Cons).
        raiz = new NodoArbol<E>(x, i.raiz, d.raiz);
    }
// </editor-fold>        

// <editor-fold desc="METODOS YA IMPLEMENTADOS" defaultstate="collapsed">             
    public boolean EsVacio() {
        return raiz == null;
    }

    public E Raiz() throws TADVacioException {
        if (raiz == null) {
            throw new TADVacioException();
        } else {
            return raiz.valor;
        }
    }

    public ArbolBinario<E> SubArbolIzqdo() throws TADVacioException {
        if (raiz == null) {
            throw new TADVacioException();
        } else {
            return new ArbolBinarioDinamico<E>(raiz.iz);
        }
    }

    public ArbolBinario<E> SubArbolDcho() throws TADVacioException {
        if (raiz == null) {
            throw new TADVacioException();
        } else {
            return new ArbolBinarioDinamico<E>(raiz.de);
        }
    }

    @Override
    public Object clone() {
        ArbolBinarioDinamico<E> a = null;
        try {
            a = (ArbolBinarioDinamico<E>) super.clone();
        } catch (CloneNotSupportedException e) {
            System.out.println(e);
        }

        try {
            if (!EsVacio()) {
                a.raiz = (NodoArbol<E>) raiz.clone();
                if (!SubArbolIzqdo().EsVacio()) {
                    a.raiz.iz = ((ArbolBinarioDinamico<E>) SubArbolIzqdo().clone()).raiz;
                }
                if (!SubArbolDcho().EsVacio()) {
                    a.raiz.de = ((ArbolBinarioDinamico<E>) SubArbolDcho().clone()).raiz;
                }
            }
        } catch (TADVacioException e) {
            System.out.println(e);
        }
        return a;
    }

    public String toString() {
        String s;
        s = new String("( ");
        if (raiz != null) {
            try {
                s += raiz.valor.toString() + " ";
                s += SubArbolIzqdo().toString();
                s += SubArbolDcho().toString();
            } catch (TADVacioException e) {
                System.out.println(e);
            }
        }
        s += " )";
        return s;
    }

    @Override
    public boolean equals(Object o) {
        if (!(o instanceof ArbolBinario)) {
            throw new IllegalArgumentException();
        }
        ArbolBinario<E> a = (ArbolBinario<E>) o;
        boolean iguales = raiz == null && a.EsVacio();

        if (raiz != null && !a.EsVacio()) {
            try {
                iguales = this.Raiz().equals(a.Raiz())
                        && this.SubArbolIzqdo().equals(a.SubArbolIzqdo())
                        && this.SubArbolDcho().equals(a.SubArbolDcho());
            } catch (TADVacioException ex) {
                ex.printStackTrace();
            }
        }

        return iguales;
    }

    /*
     Metodo que les doy en el fichero de alumnos para que se muestre
     el arbol de una forma mas legible.
     */
    public String miToString() {
        String s;
        s = new String("");
        if (raiz != null) {
            try {
                s += raiz.valor.toString();
                if (!SubArbolIzqdo().EsVacio()) {
                    ArbolBinarioDinamico i = (ArbolBinarioDinamico) this.SubArbolIzqdo();
                    s += " <" + i.miToString() + ">";
                }
                if (!SubArbolDcho().EsVacio()) {
                    ArbolBinarioDinamico d = (ArbolBinarioDinamico) this.SubArbolDcho();
                    s += " [" + d.miToString() + "]";
                }
            } catch (TADVacioException e) {
                System.out.println(e);
            }
        }
        return s;
    }

    /*
     Metodo que les doy en el fichero de alumnos que pinta el arbol
     en pantalla.
     */
    public void dibujar() {
        this.dibujar(this, new String());
    }

    private void dibujar(ArbolBinario<E> a, String indentacion) {
        try {
            if (a.Raiz() != null) {
                if (!a.SubArbolDcho().EsVacio()) {
                    this.dibujar(a.SubArbolDcho(), indentacion + "     ");
                }

                System.out.println(indentacion + "|" + a.Raiz().toString());

                if (!a.SubArbolIzqdo().EsVacio()) {
                    this.dibujar(a.SubArbolIzqdo(), indentacion + "     ");
                }

            }
        } catch (TADVacioException e) {
        }
    }
// </editor-fold> 

/*
    IMPLEMENTACIONES DEL CURSO
*/
    
// <editor-fold desc="EJERCICIOS" defaultstate="collapsed">                 
 
// </editor-fold>     
    
// <editor-fold desc="EJERCICIOS AVANZADOS" defaultstate="collapsed">                            

// </editor-fold>
    
// <editor-fold desc="EJERCICIOS DE CONTROLES" defaultstate="collapsed"> 
 
// </editor-fold>     
    
// <editor-fold desc="EJERCICIOS DE EXAMENES EXTRAORDINARIOS" defaultstate="collapsed">
    
// </editor-fold>  
    
} 