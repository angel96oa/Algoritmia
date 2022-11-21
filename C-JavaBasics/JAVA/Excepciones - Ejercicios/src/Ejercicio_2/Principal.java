package Ejercicio_2;

public class Principal {

    public static void main(String[] args) {
        PruebaEx p = new PruebaEx();

        try {
            p.metodo1();
            p.metodo2();
            p.metodo3();
            p.metodo4();
            p.metodo5();
        }
        catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception");
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Exception");
        }
        catch (NullPointerException e) {
            System.out.println("NullPointerException");
        }
        catch (NumberFormatException e) {
            System.out.println("NumberFormatException");
        }
        catch (ArrayStoreException e) {
            System.out.println("ArrayStoreException");
        }
        
    }
}
