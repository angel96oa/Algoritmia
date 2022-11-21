package pBiblioteca;

public class Publicaciones {

    private String ISBN;
    private String titulo;
    private String autor;

    public Publicaciones(String ISBN, String titulo, String autor) {
        this.ISBN = ISBN;
        this.titulo = titulo;
        this.autor = autor;
    }

    public String toString() {
        String s = new String();
        s = s + "ISBN: " + this.ISBN + "\n";
        s = s + "Titulo: " + this.titulo + "\n";
        s = s + "Autor: " + this.autor + "\n";

        return s;
    }
}
