
public class Principal {

    public static void main(String[] args) {
////instance of
////        System.out.println(new Persona() instanceof Persona); //T
////        System.out.println(new Persona() instanceof Alumno); //F
////        System.out.println(new Alumno() instanceof Persona); //T
////        System.out.println(new Alumno() instanceof Alumno); //T
////
////        Persona p = new Persona();
////        Alumno a = new Alumno();
////
////        System.out.println(p instanceof Persona);
////        System.out.println(p instanceof Alumno);
////        System.out.println(a instanceof Persona);
////        System.out.println(a instanceof Alumno);
//
////nos dice si una instancia es de una determinada clase. Puede serlo de varios.
//        //UPCASTING Y DOWNCASTING
//        //CASTING: Adaptar (o ver como) un VALOR de un tipo a otro tipo.
////se lee de derecha a izquierda
//        //aqui empieza el downcasting
//        Persona p = new Alumno(); //implicito
//        System.out.println(p instanceof Persona); //true
//        System.out.println(p instanceof Alumno); //true
//
//        Persona p2 = (Persona) new Alumno(); //explicito
//
//        //UPCASTING: adaptar una instancia para que sea tratada como una instancia de una clase superior
//        //****************************************************
//        //aqui empieza el downcasting
//        
//// Alumno a = new Persona(); -> implicito, asi da error en compilacion   
////Alumno a2 = (Alumno) new Persona(); //explicito, da error en ejecucion
//        Persona p3 = new Persona();//estas dos lineas es otra forma de escribir lo mismo de antes
//        Alumno a3 = (Alumno) p3;
//        
//        //downcasting: lo mismo de arriba pero inferior
//        //******************************************************
//        Persona p4 = new Alumno();
//        Alumno a4 = (Alumno) p4;
//        //el downcasting solo puede hacerse cuando hay upcasting

//CONSECUENCIAS DE UPCASTING
//        //1. La ocultación de elementos
//        Persona p = new Alumno();
//        //System.out.println(p.nota); no ve nota porque en la instacia solo ve la parte de persona
//        System.out.println(((Alumno)p).nota); //así si que puede ver la nota
//        
//        Alumno a = (Alumno)p;
//        System.out.println(a.nota); //así tambien funciona, convierte primero p y despues imprime la nota
//        
////***************************
//        
//        Alumno a2 = (Alumno) new Persona(); 
//        System.out.println(a2.nota); //da error porque intentas acceder a la nota de una persona, y persona no tiene nota
//        
//        
        //2. Polimorfismo y ligadura dinamica
        //2.1 POLIMORFISMO
        
        Persona p = new Persona();
        System.out.println(p instanceof Persona);
        
        p = new Alumno();
        System.out.println(p instanceof Alumno);
       
        p = new Universitario();
        System.out.println(p instanceof Universitario);
        
        
        //Poli: muchas,  muchas: formas,  es decir, una misma variable puede ser varias clases
        //puede mirar a varias instancias
        
        
        

        //2.2 Ligadura dinámica
        
        //p.metodoUni(); está señalando a la parte de persona de la instacia
//        p = new Persona(); p.saludo();
//        p = new Alumno(); p.saludo();
//        p = new Universitario(); p.saludo();
//        
        //EJEMPLO DE USO
        
        Persona[] personas = new Persona[3];
        personas[0] = new Persona();
        personas[1] = new Alumno();
        personas[2] = new Universitario();
        for (int i = 0; i < personas.length; i++) {
            personas[i].saludo();
            
        }
        
    }
}
