package Ejercicio_2;

public class PruebaEx {

   
    
    java.util.Random r = new java.util.Random();

    
    public void metodo1() {

        for (int i = 0; i < 10; i++) {
            System.out.println(r.nextInt(10) / r.nextInt(10));
        }
    }


    public void metodo2() {

        int array[] = new int[r.nextInt(10)];
        for (int i = 0; i < r.nextInt(10); i++) {
            array[i] = 1;
        }
    }

    public void metodo3() {

        Object o = null;
        System.out.println(o.toString());
    }

    public void metodo4() {

        int x = Integer.parseInt("a");
    }

    public void metodo5() {

        int array2[] = new int[r.nextInt(10)];
        for (int i = 0; i < r.nextInt(10); i++) {
            array2[i] = r.nextInt(10) / r.nextInt(10);
            int y = Integer.parseInt("b");
        }
    }
}





