package compareToClone;

public class Persona extends Object implements Comparable, Cloneable /*para clonar un objecto hay que meter el cloneable*/ {
//implements Comparable

    int edad;
    String nombre;

    //Toda clase hereda de object, la clase madre
    public int compareTo(Object o) {
        if (!(o instanceof Persona)) {
            return 0; //no son comparables
        }
        Persona p = (Persona) o; //Adaptas o como una persona(downcasting)

        //  <0   menor
        return this.edad - p.edad;// == 0  iguales
        //  >0   mayor
    }

    public boolean equals(Object o) {
        if (!(o instanceof Persona)) {
            return false;
        }
        Persona p = (Persona) o;
        if (this.edad != p.edad) {
            return false;
        }
        return true;
    }

    //en el principal si en compareTo es 0 y el equals es false, no son comparables
    //en el principal si en compareTo es 0 y el equals es true, son iguales
    public Object clone() {
        Persona p = null;
        try {
            p = (Persona) super.clone();
        } catch (CloneNotSupportedException e) {

        }
        return p;
    }
}
