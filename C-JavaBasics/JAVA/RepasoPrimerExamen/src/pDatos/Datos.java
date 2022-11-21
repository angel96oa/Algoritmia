package pDatos;

public class Datos {

    private int[] enteros;

    public Datos(int numElementos) {
        java.util.Random rand = new java.util.Random();

        enteros = new int[numElementos];

        for (int i = 0; i < enteros.length; i++) {
            enteros[i] = rand.nextInt(10) + 1;
        }

    }

    public void añadirValor(int posicion, int valor) {
        if (posicion >= 0 && posicion < enteros.length) {
            enteros[posicion] = valor;
        }
    }
    
    public int minimoValor(){
        int min = 0;
    
        for (int i = 0; i < enteros.length; i++) {
            if(i == 0){
                min = enteros[0];
            }
            else{
                if(enteros[i]< min){
                    min = enteros[i];
                }
            }
            
        }
        return min;
    }
    
    public String toString(){
        String s = new String();
        
        for (int i = 0; i < enteros.length; i++) {
            s = s + "[" + enteros[i] + "]";
        }
        s = s + "\n";
        
        return s;
    }
}
