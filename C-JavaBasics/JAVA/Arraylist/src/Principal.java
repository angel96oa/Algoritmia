
import java.util.ArrayList;
import java.util.Iterator;

public class Principal {

    public static void main(String[] args) {

        //ARRAYLIST
//        ArrayList al = new ArrayList();
//        System.out.println(al.size());  //nº elementos
//
//        al.add("a"); //añade la a -->   |a|
//        al.add("b"); //añade la b -->   |a|b|
//        al.add("c"); //añade la c -->   |a|b|c|
//
//        System.out.println(al.size()); //obtener elementos
//
//        try {
//            System.out.println(al.get(20));
//        } catch (IndexOutOfBoundsException e) {
//            System.out.println("IndexOutOfBoundsException");
//        }
//        mostrar(al);
//        al.add(1, "d"); //insertar
//        mostrar(al);
//        al.set(2, "w"); //sustituir
//        mostrar(al);
//        al.remove(2); //borrar posicion
//        mostrar(al);
//        al.remove("d"); //borra elemento
//        mostrar(al);
//        al.add("c");
//        al.add("b");
//        al.add("c");
//        mostrar(al);
//        System.out.println(al.indexOf("c"));//lugar de la primera c
//        System.out.println(al.lastIndexOf("c"));//lugar de la ultima c
//        System.out.println(al.indexOf("k"));//contiene la k?
//        System.out.println(al.contains("a"));//contiene la a?
//        al.clear();
//        mostrar(al);
//        System.out.println(al.isEmpty());//está vacio?
//        //ITERADORES
//        ArrayList al = new ArrayList();
//        //Iterator it = new Iterator(); //no se puede iterar clases desde cero...
//
//        Iterator it = al.iterator(); //Un interador se obtiene de un arrayList creado
//        //es como un for
//        System.out.println(it.hasNext());//el iterador empieza en la posicion 0
//        //sale false porque no hay ninguno
//        al.add("a");
//        al.add("b");
//        al.add("c");
//        al.add("d");
//        it = al.iterator();
//        //Si se modifica l nº de elementos de un array, cambia el iterador. HAY QUE VOLVER A OBTENERLO.
//        System.out.println(it.hasNext());
//        System.out.println(it.next()); //a
//        System.out.println(it.next()); //b
//        mostrar(al);                   //a, b, c, d
//        it.remove();                   //borra la ultima obtenida
//        mostrar(al);
//        mostrarIterador(al);       
//       
        //ARRAYLIST CON OBJETOS
        ArrayList al = new ArrayList();
        al.add(new Persona());
        al.add(new Persona());
        //un arraylist es de tipo objeto, es decir, hay que hacer downcasting

        if (al.get(0) instanceof Persona) {
            Persona p = (Persona) al.get(0);
        } //downcasting

        //el iterador tambien saca objetos, por lo que hay que hacerle casting
        Iterator it = al.iterator();
        Persona p2 = (Persona) it.next();
        al.add("a");

        mostrarPersonas(al);
    }

    public static void mostrar(ArrayList a) { //muestra el iterador
        for (int i = 0; i < a.size(); i++) {
            System.out.print(a.get(i) + ", ");
        }
        System.out.println(" size: " + a.size());
        System.out.println();
    }

    public static void mostrarIterador(ArrayList a) {
        Iterator it = a.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
            //it.remove(); //esto es opcional
        }
    }

    public static void mostrarPersonas(ArrayList a) {
        for (int i = 0; i < a.size(); i++) {
            if(a.get(i) instanceof Persona){
                Persona p = (Persona) a.get(i);
                System.out.println(p.nombre);
            }
        }
                
    }
}

