
public class Principal {

    public static void main(String[] args) {

        //INTRODUCCIÓN
//        int x = 0; //x = ¿?
////        int y = 5 / x;
//        int y;
//        if (x == 0) {
//            System.out.println("Division / 0");
//        } else {
//            y = 5 / x;
//            System.out.println(y);
////        }
//       try{
//           y = 5/x;
//           System.out.println("Esto no se ejecuta si x == 0");
//       }
//       catch(NullPointerException e){
//           System.out.println("Así entras en NullPointerException");
//           y = 0;
//       }
//        
//        catch(ArithmeticException e){
//                System.out.println("Así entras en ArithmeticExcepction");
//                y = 0;
//                }
//       System.out.println(y);
        //las excepciones se usan para que cuando ocurra un error notificarlo y que el programa siga adelante sin fallos
        //METODOS
//        Prueba p = new Prueba();
//        try{
//        p.metodo();
//        }catch(ArithmeticException e){        //UNA EXCEPCION CONTROLA UN ERROR, EN ESTE CASO NO SALE DE PRUEBA, POR LO QUE SOLO SALE CATCH EN PRUEBA
//            System.out.println("Catch en main");
//        }
        //THROW
//        ArithmeticException x;          //las excepciones son objetos
//        x = new ArithmeticException("Mensaje");
//        System.out.println(x);
//        
//        int x = 0;
//        int y;
//
//        try {
//            if (x == 0) {
//                ArithmeticException e = new ArithmeticException();
//                throw e;
//            } else {
//                y = 5 / x;
//            }
//        }catch
//            (ArithmeticException e){
//                System.out.println("catch");
//            }  //Lo que pasa interiormente es que cuando le indicas a java una excepcion, cuando esta ocurre se crea un objeto de tipo excepcion y con el trhow lo lanza
//        Prueba p = new Prueba();
//        try{
//            p.metodo2();
//        }catch(ArithmeticException e){
//            System.out.println("catch en main");
//        }
//    
        //JERARQUÍA
        // throw new RuntimeException();
        //excepciones en tiempo de ejecucion
        //no es obligatorio controlarlas en tiempo de
        //compilacion
        //throw new Exception();
        //es necesario controlarlas en tiempo de 
        //compilacion. No se puede ejecutar si no 
        //se controla
//        try {
//            throw new Exception();   //exception es la madre de todas las excepciones, pero eso en el examen no vale :D
//        } catch (ArithmeticException e) {
//            System.out.println("catch2");
//        } catch (Exception e) {
//            System.out.println("catch");
//        }

        
        //THROWS    (OJO LA S!)
        
//        Prueba p = new Prueba();
//        try{
//        p.metodo3();
//        }catch(Exception e){
//            System.out.println("catch main"); // Si no se controla la excepcion auqi tampoco ni en la clase, arriba hay que poner el trhows exception
//        }
    

    //FINALLY
    try{
    int x = 0;
} finally {
            System.out.println("finally 1");
}
    
    try{
        int x = 0;
    }
    catch(ArithmeticException e){
        System.out.println("B");
    }finally{
        System.out.println("finally 2");
    }
    
    try{
        int x = 0;
        int y = 5/x;
    }catch(ArithmeticException e){
        System.out.println("C");
    }finally{
        System.out.println("finally 3");   
    }
    
    try{
        int x = 0;
        int y = 5/x;
    }
    finally{
        System.out.println("finally 4");
    }
    //se usa para que si hay un error, quite todo de forma normal
}
}