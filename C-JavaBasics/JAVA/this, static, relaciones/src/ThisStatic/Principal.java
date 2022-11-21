package ThisStatic;


//Principal.main;
public class Principal {

    public static void main(String[] args) {
//
//////        // EQUALS
//        Persona p = new Persona();
//        Persona q = new Persona();
//        Persona k = p;
//        
//        System.out.println(p);
//        System.out.println(q);
//        System.out.println(k);
//        
//        //el == compara direcciones de memoria
//        System.out.println(p==q);
//        System.out.println(p==k);
        
//        // El equals compara valores de atributos
//        System.out.println(p.equals(q));
//        System.out.println(p.equals(k));
     //THIS.
//        System.out.println("Construyendo...\n");
//        Persona p = new Persona();
//        Persona q = new Persona("Juan");
//        Persona k = new Persona("Pepe", 18);
//        System.out.println();
//        
//        System.out.println("Saludando...\n");
//        p.saluda();
//        q.saluda();
//        k.saluda();
//        System.out.println();
//        
//        System.out.println("Direcciones de memoria...\n");
//        System.out.println(p);
//        System.out.println(q);
//        System.out.println(k);
//        System.out.println();
//        
//        System.out.println("Doy a m la direccion de p...\n");
//        Persona m = p.devolverMiPosicionEnMemoria();
//        System.out.println(p);
//        System.out.println(m);
     //THIS()
//        Persona p = new Persona();
//        Persona q = new Persona("Juan");
//        Persona k = new Persona("Pepe", 18);
//     STATIC
        System.out.println(Persona.dameContador());
        Persona p = new Persona();
        System.out.println(Persona.dameContador());
        Persona q = new Persona("pepe");
        System.out.println(Persona.dameContador());
        Persona k = new Persona("pepe", 18);
        System.out.println(Persona.dameContador());
        
        int x = Integer.parseInt("123");
        System.out.println(x+2);
        
        System.out.println(Math.pow(2, 3));
        
        saluda();    
    }

    public static void saluda(){
        System.out.println("Hola");
//    }
    }
}
