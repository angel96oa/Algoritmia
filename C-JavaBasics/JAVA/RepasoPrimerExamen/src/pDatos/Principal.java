package pDatos;

public class Principal {
    public static void main(String[] args) {
        Datos d = new Datos(5);
        
        System.out.println(d);
        
        System.out.println(d.minimoValor());
        
        d.añadirValor(2, -99);
    
        System.out.println(d);
        
        System.out.println(d.minimoValor());
    }

}
