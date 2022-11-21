package Ejercicio_4;

public class Persona {

    private float peso;

    public Persona() {

    }

    public Persona(float peso) {

        this.peso = peso;
    }

    /**
     *
     */

    /**
     *
     */
    public void ponPeso(float peso) throws NumeroNegativoException {

        if (peso < 0) {
            throw new NumeroNegativoException("Peso incorrecto " + peso);
        }

        this.peso = peso;

    }

    public float damePeso() {
        return peso;
    }

}
