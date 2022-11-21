package Ejercicio_1;


public class Principal {

    public static void main(String[] args) {
        java.util.Random r = new java.util.Random();
//1
        try {
            for (int i = 0; i < 10; i++) {
                System.out.println(r.nextInt(10) / r.nextInt(10));
                System.out.println("puede dar error si x / 0");
            }
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException");
            int y = 0;
        }
//2
        try{
        int array[] = new int[r.nextInt(10)];
        for (int i = 0; i < r.nextInt(10); i++) {
            array[i] = 1;
        }
        }catch(ArrayStoreException e){
            System.out.println("ArithmeticException");
        }
//3
        try{
        Object o = null;
        System.out.println(o.toString());
        }catch(NullPointerException e){
            System.out.println("Null pointed exception");
        }
//4
        try{
        int x = Integer.parseInt("a");

        int array2[] = new int[r.nextInt(10)];
        for (int i = 0; i < r.nextInt(10); i++) {
            array2[i] = r.nextInt(10) / r.nextInt(10);

            int y = Integer.parseInt("b");
        }
        }catch(Exception e){
            System.out.println("NullPointed exception");
//5
            try{
            Object o = null;
            System.out.println(o.toString());
        }catch(NullPointerException x){
                System.out.println("nullpointed exception");
        }
        
    }  
}
}