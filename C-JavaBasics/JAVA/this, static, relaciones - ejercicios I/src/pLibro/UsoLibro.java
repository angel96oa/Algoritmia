package pLibro;

public class UsoLibro {

    public static void main(String[] args) {

        System.out.println("Tenemos el siguiente numero de libros: " + Libro.dameNumeroLibros());

        Libro p = new Libro("Harry Potter");
        Libro q = new Libro("Las cronicas de narnia");

        System.out.println();

        String s = "Harry";
        Libro x = new Libro(s);
        System.out.println(x);

        String a[] = {"texto de la pagina 0", "texto de la pagina 1"};
        Libro b = new Libro(a);
        System.out.println(b);

        String z[] = new String[2]; //0,1
        z[0] = "En un lugar de la mancha....";
        z[1] = "...y don quijote esta loco. fin";
        Libro f = new Libro("Don Quijote", z);

        System.out.println(f.toString());

        System.out.println("Un rato despues, tenemos el siguiente numero de libros: " + Libro.dameNumeroLibros());

    }
}
