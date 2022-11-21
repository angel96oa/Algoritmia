
public class Prueba {

    public void metodo() {
        int x = 0; // x = ¿?
        // int y = 5 / x;
        int y;
        try {
            y = 5 / x;
        } catch (ArithmeticException e) {
            System.out.println("catch en prueba");
        }

    }

    public void metodo2() {
        int x = 0;
        int y;
        if (x == 0) {
            throw new ArithmeticException();
        } else {
            y = 5 / x;
        }
    }

    public void metodo3() throws Exception { //Si no se controla aqui, hay que poner esa frase para avisar de que va la excepcion
        //  try{
        throw new Exception();
        //}
        //catch(Exception e){
        //  System.out.println("catch prueba");
        // }
    }

    public void metodo4() throws IllegalAccessException, InstantiationException {
        int x = 0;
        if (x == 0) {
            throw new IllegalAccessException();
        } else {
            throw new InstantiationException();
        }
    }
    //TODO EL FOLLON DEL THROW Y EL THROWS ES SOLO PARA LAS EXCEPCIONES QUE NO SON CONTROLADAS
    
    public void metodo5(){
        throw new RuntimeException();
    }
    //EN ESTA NO HACE FALTA PORQUE NO ES OBLIGADO AVISAR



}
