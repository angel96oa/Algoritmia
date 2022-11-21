package pPersona;

import java.util.Scanner;

public class usoPersona {
    public static void main(String[] args) {
        
        int[] enteros = new int[5];
        for (int i = 0; i < enteros.length; i++) {
            enteros[i] = i;
            System.out.println(enteros[i]);
        }
        
        
        Persona[] personas;
        personas = new Persona[3];
        
        Scanner s = new Scanner (System.in);
        
        for (int i = 0; i < personas.length; i++) {
            personas[i] = new Persona();
            
            System.out.println("Introduce nombre para persona " + i + ": ");
            String n = s.nextLine();        // para recoger String por teclado
            personas[i].ponNombre(n);
            
            
            System.out.println("Introduce edad para persona " + i + ": ");
            int e = s.nextInt();    // para recoger enteros por teclado
            s.nextLine();           // para borrar el buffer despues de pedir algo no string
            personas[i].ponEdad(e);
                
            System.out.println(personas[i]);
        }
        
        System.out.println(personas[1].equals(personas[2]));
        
    }

}
