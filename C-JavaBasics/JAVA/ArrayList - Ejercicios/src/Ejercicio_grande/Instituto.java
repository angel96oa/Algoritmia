package Ejercicio_grande;

import java.util.ArrayList;
import java.util.Iterator;

public class Instituto {

    private String nombre;
    private int telefono;

    private ArrayList<Persona> personas;

    public Instituto() {
        personas = new ArrayList<>();
    }

    public void matricular(String nombre, String dni, String curso) throws DNIIncorrectoException {
        if (dni == null) {
            throw new DNIIncorrectoException();
        }

        if (curso.equals("Primero") || curso.equals("Segundo") || curso.equals("Tercero")) {
            personas.add(new Alumno(nombre, dni, curso));
        } else {
            personas.add(new Alumno(nombre, dni, "En espera"));
        }
    }

    public void registar(String nombre, String dni, String especialidad) throws DNIIncorrectoException {
        if (dni == null) {
            throw new DNIIncorrectoException();
        }
        if (especialidad.equals("Informatica") || especialidad.equals("C") || especialidad.equals("Java")) {
            personas.add(new Profesor(nombre, dni, especialidad));
        } else {
            personas.add(new Profesor(nombre, dni, "General"));
        }
    }

    public void darBaja(Persona p) throws NoEncontradoException {
        boolean eliminado;
        eliminado = personas.remove(p);
        if (eliminado == false) {
            throw new NoEncontradoException();
        }
    }

    public void visualizarProfesores() {
        Iterator<Persona> it = personas.iterator();

        while (it.hasNext()) {
            Persona p = it.next();

            if (p instanceof Profesor) {
                System.out.println(p);
            }
        }
    }


}
