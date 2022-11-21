package Personajes;

public abstract class Stats implements Cloneable, Comparable {

    static int contador;
    int id;
    String nombre, historia;
    int vida, daño, nivel, experiencia;

    public Stats(String nombre, String historia, int vida, int daño) {
        contador++;
        this.id = contador;
        this.nombre = nombre;
        this.historia = historia;
        this.vida = vida;
        this.daño = daño;
        this.experiencia = experiencia;
        this.nivel = nivel;
    }
//dame y pon - todos menos ID, historia y nombre

    public void ponVida() {
        this.vida = vida;
    }

    public int dameVida() {
        return vida;
    }

    public void ponDaño() {
        this.daño = daño;
    }

    public int dameDaño() {
        return this.daño;
    }

    public void ponNivel() {
        this.nivel = nivel;
    }

    public int dameNivel() {
        return this.nivel;
    }

    public void ponExperiencia() {
        this.experiencia = experiencia;
    }

    public int dameExperiencia() {
        return this.experiencia;
    }

    public String toString() {
        String s = new String();
        s = s + "Nombre: " + nombre + "\n";
        s = s + "Vida: " + vida + "\n";
        s = s + "Daño: " + daño + "\n";

        return s;
    }

    public boolean equals(Object o) {
        if (!(o instanceof Stats)) {
            return false;
        }
        Stats s = (Stats) o;

        return this.id == s.id;
    }

    public int compareTo(Object obj) {
        if (!(obj instanceof Stats)) {
            return 0;
        }
        Stats s = (Stats) obj;
        if (this.nivel - s.nivel == 0) {
            return this.experiencia - s.experiencia;
        } else {
            return this.nivel - s.nivel;
        }
    }
    
    public Stats Clone(){
        Stats s = null;
        try{
            s = (Stats) super.clone();
        }catch (CloneNotSupportedException e){
            System.out.println("No se puede clonar");
        }
        return s;
    }
}
