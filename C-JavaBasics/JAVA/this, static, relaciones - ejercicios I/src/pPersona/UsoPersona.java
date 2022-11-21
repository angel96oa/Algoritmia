package pPersona;

public class UsoPersona {
    
    public static void main(String[] args) {
        
        Persona p = new Persona();
        Persona q = new Persona("Angel", 18);
        Persona k = new Persona("Pepe", 20, 70);
        
        System.out.println(p.toString());
        System.out.println(q.toString());
        System.out.println(k.toString());
        
        System.out.println(q.dameEdad());
        
        System.out.println(q.nIdentificador());
        
        q.cambiarEdad(45);
        System.out.println(q.dameEdad());
        System.out.println(q.toString());
    }

}
