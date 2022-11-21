package Ejercicio_3;

public class PruebaTr {

    public void Metodo1() throws Exception {
        try {
            throw new Exception();
        } catch (Exception e) {
            System.out.println("error");
        }
    }

    public void Metodo2() throws Exception {
        try {
            throw new InstantiationException();
        } catch (InstantiationException e) {
            System.out.println("Error");
        }
    }

    public void metodo3() throws Exception {
        try {

            throw new InterruptedException();
        } catch (InterruptedException e) {
            System.out.println("error");
        }

    }
}
