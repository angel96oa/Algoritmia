package pBiblioteca;

public class Libros extends Publicaciones {

    private int año;
    private int nPaginas;

    public Libros(String ISBN, String titulo, String autor, int año, int nPaginas){
        super(ISBN, titulo, autor);
        this.año = año;
        this.nPaginas = nPaginas;
    }
}
