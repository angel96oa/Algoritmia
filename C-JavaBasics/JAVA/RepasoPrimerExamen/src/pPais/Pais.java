package pPais;


public class Pais {

    private String nombre;
    private float extension;
    private int numeroIdentificativo;

    private static int contador;

    //A
    public Pais() {
        nombre = "Sin nombre";
        contador++;
        numeroIdentificativo = contador;
    }

    public Pais(String nombre, float extension) {
        this();

        this.nombre = nombre;
        this.extension = extension;
    }

    //B
    public void ponNombre(String nombre) {
        this.nombre = nombre;
    }

    public String dameNombre() {
        return this.nombre;
    }

    public void ponExtension(float extension) {
        this.extension = extension;
    }

    public float dameExtension() {
        return this.extension;
    }
    
    public int dameNumeroIdentificativo() {
        return this.numeroIdentificativo;
    }
    //C

    public int comparar(Pais p) {
        if (this.extension < p.extension) {
            return -1;
        } else if (this.extension == p.extension) {
            return 0;
        } else {
            return 1;
        }
    }

    //D
    public boolean equals(Object obj) {
        if (!(obj instanceof Pais)) {
            return false;
        }
        Pais p = (Pais) obj;

        if (this.numeroIdentificativo != p.numeroIdentificativo) {
            return false;
        }

        return true;
    }

    public String toString() {
        String s = new String();
        s = s + "nombre: " + nombre + "\t";
        s = s + "extension: " + extension + "\n";
        return s;
    }

}
