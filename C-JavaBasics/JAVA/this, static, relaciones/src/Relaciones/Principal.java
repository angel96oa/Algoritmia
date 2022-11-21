package Relaciones;

public class Principal {
    public static void main(String[] args) {
        
        
        Persona p = new Persona();
        Libro l = new Libro();
        l.titulo = "JAVA";
        p.ponDiario(l);
        Libro k = p.dameDiario();
        Persona q = new Persona();
        q.ponDiario(new Libro());
        System.out.println(q.dameDiario().titulo);
      
        System.out.println(p.dameDiario());
        System.out.println(k);
        System.out.println(l);
        System.out.println(q.dameDiario());
        
        //ARRAYS
        
//        int[] enteros;
//        enteros = new int[5];
//        for (int i = 0; i < enteros.length; i++) {
//            enteros[i] = i + 1;
//            System.out.println(enteros[i]);
//            
//        }
        
////        
//        Persona[] personas;
//        personas = new Persona[5];
//        for (int i = 0; i < personas.length; i++) {
//            personas[i] = new Persona();
//            personas[i].edad = i + 1;
//            System.out.println(personas[i].edad);
//        }
    }
        
        

}
