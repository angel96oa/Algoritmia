
import AcademiaDublin.ReproductorMp3;
import Personajes.Personaje.*;
import Armas.*;
import Personajes.Guerrero;
import Personajes.Mago;
import Personajes.Personaje;
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {
//reproductorMPÂ·.empezar();
        Scanner s = new Scanner(System.in);
        int opc;
        int opcion;
        Personaje jugador;
        Personaje jugadorEnemigo;
        
                    ReproductorMp3.empezar();
                    
                
                  
        System.out.println("Elija un personaje: ");
        System.out.println("1. Guerrero");
        System.out.println("2. Mago");

        opcion = s.nextInt();
        s.nextLine();
        System.out.println();

        switch (opcion) {
            case 1:
                jugador = new Guerrero("Aragorn", "...", 200, 50);
                break;
            case 2:
                jugador = new Mago("Gandalf", "...", 150, 75);
                break;
            default:
                jugador = new Guerrero("Frodo", "...", 100, 25);
        }

        jugadorEnemigo = new Guerrero("Azog", "...", 200, 45);

        do {
            System.out.println("Jugador: " + jugador.toString());
            System.out.println("Enemigo: " + jugadorEnemigo.toString());
            System.out.println();
            System.out.println("Elige el tipo de ataque: ");
            if (jugador instanceof Guerrero) {
                System.out.println("1. Ataque primario");
                System.out.println("2. Ataque secundario");
            }
            if (jugador instanceof Mago) {
                System.out.println("1. Ataque primario");
                System.out.println("2. Ataque de fuego");
                System.out.println("3. ataque de Hielo");
            }
            opcion = s.nextInt();
            System.out.println();
            System.out.println();
            
            switch(opcion){
                case 1:
                    
            }
            System.out.println(jugador + "ha perdido" + "puntos de vida");
            System.out.println(jugadorEnemigo + "ha perdido" + "puntos de vida");
            
        } while (jugador.estaVivo() && jugadorEnemigo.estaVivo());

        if(jugador.estaVivo() && jugadorEnemigo.estaMuerto()){
            System.out.println("Has ganado");
        }
        else if(jugador.estaMuerto() && jugadorEnemigo.estaVivo()){
            System.out.println("Has perdido");
        }
        else{
        System.out.println("Ambos murieron");
    }
            ReproductorMp3.terminar();
    }
}
