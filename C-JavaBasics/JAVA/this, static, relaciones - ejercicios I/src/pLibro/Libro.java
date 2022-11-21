package pLibro;

public class Libro {

    private static int numeroLibros;
    
    private String titulo;
    private String[] paginas;
    private int ISBN;
    
    public Libro() {
        numeroLibros++;
        titulo = "Sin titulo";
        ISBN = numeroLibros;
        paginas = new String[0];
    }

    public Libro(String titulo) {
        this();
        this.titulo = titulo;
    }

    public Libro(String[] paginas) {
        this();
        this.paginas = paginas;
    }

    public Libro(String titulo, String[] paginas) {
        this();
        this.titulo = titulo;
        this.paginas = paginas;
    }

    public static int dameNumeroLibros() {
//        System.out.println("El numero de libros es: " + numeroLibros + "\n");
//        return "Contador";
        return numeroLibros;
    }

    public String dameTitulo() {
        return titulo;
    }

    public void ponTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String[] damePaginas() {
        return paginas;
    }

    public void ponPaginas(String[] paginas) {
        this.paginas = paginas;
    }

    public int dameISBN() {
        return ISBN;
    }

    public String toString() {
        String s = new String();
        s = s + "Título: " + titulo + "\n";

        s = s + "Páginas:\n";
        for (int i = 0; i < paginas.length; i++) {
            s = s + i + ") " + paginas[i] + "\n";
        }

        return s;
    }

}
