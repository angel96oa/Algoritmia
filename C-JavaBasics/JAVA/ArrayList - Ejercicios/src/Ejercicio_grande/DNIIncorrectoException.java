package Ejercicio_grande;

public class DNIIncorrectoException extends Exception{
public DNIIncorrectoException(){
    
}
public DNIIncorrectoException(String s){
    super(s);
    System.out.println("es null :D");
}
}
