package ArraySimple;

import java.util.Random;
import java.util.Scanner;

public class Info {

    private int[] datos;

    public Info() {
        this.datos = new int[0];
    }

    public Info(int n) {
        this.datos = new int[n];
        Random r = new Random();
        for (int i = 0; i < this.datos.length; i++) {
            this.datos[i] = r.nextInt(101) - 10;
        }
    }

    public Info(int x, int y, int z) {

        this.datos[0] = x;
        this.datos[1] = y;
        this.datos[2] = z;

    }

    public Info(int[] datos2) {
        this.datos = new int[datos2.length];
        for (int i = 0; i < this.datos.length; i++) {
            this.datos[i] = datos2[i];
        }
    }

    public void ponDatos(int[] datos2) {
        this.datos = datos2;
    }

    public int[] dameDatos() {
        return this.datos;
    }

    public String toString() {
        String s = new String();
        for (int i = 0; i < this.datos.length; i++) {
            s = s + "[" + this.datos[i] + "]";
        }
        s = s + "\n";
        return s;
    }

    public boolean inicializado() {
        if (this.datos == null) {
            return false;
        } else {
            return true;
        }
    }

    public int valido() {
        if (this.datos == null) {
            return -1;
        } else if (this.datos.length == 0) {
            return 0;
        } else {
            return 1;
        }
    }

    public void añadir1() {
        Scanner s = new Scanner(System.in);
        for (int i = 0; i < this.datos.length; i++) { //Procesar un numero de elementos que se conoce su numero total
            this.datos[i] = s.nextInt();
            s.nextLine();
        }
    }

    public void asignar2() {
        Random r = new Random();
        Scanner s = new Scanner(System.in);

        int valor, posicion;

        valor = s.nextInt();
        s.nextLine();
        posicion = r.nextInt(this.datos.length);

        while (valor != 0) {
            this.datos[posicion] = valor;
            valor = s.nextInt();
            s.nextLine();
            posicion = r.nextInt(this.datos.length);
        }
    }

    public void asignar3() {
        Scanner s = new Scanner(System.in);
        int valor, posicion;
        char opcion;
        do {
            valor = s.nextInt();
            s.nextLine();
            posicion = s.nextInt();
            s.nextLine();

            if (posicion > 0 && posicion <= this.datos.length) {
                this.datos[posicion] = valor;
            }
            System.out.println("¿Quieres introducir un valor");
            opcion = s.next().charAt(0);
        } while (opcion != 'n' && opcion != 'n');
    }

    public int sumatorio() {
        int suma = 0;
        for (int i = 0; i < this.datos.length; i++) {
            suma = suma + this.datos[i];
        }
        return suma;
    }

    public float media() {
        float media = 0;
        for (int i = 0; i < this.datos.length; i++) {
            media = (media + this.datos[i]) / this.datos.length;
        }
        return media;
    }

    public void paridad() {
        for (int i = 0; i < this.datos.length; i++) {
            if (this.datos[i] % 2 == 0) {
                System.out.println("par");
            }
            else {
                System.out.println("impar");
            }
        }
    }

    
    public void multiplo(int x){
        for (int i = 0; i < this.datos.length; i++) {
            if (this.datos[i]%x == 0) {
                System.out.println("es multiplo");
            }
            else{
                System.out.println("No es multiplo");
            }
        }
    }
    
    public void negativo(){
        for (int i = 0; i < this.datos.length; i++) {
            if (this.datos[i]<0) {
                System.out.println("es negativo");
            }
            else{
                System.out.println("no es negativo");
            }
        }
    }
    
    public int maximo(){
        int max = 0;
        for (int i = 0; i < this.datos.length; i++) {
                  
            
        }
    
    
    
 return max;   
}
}
