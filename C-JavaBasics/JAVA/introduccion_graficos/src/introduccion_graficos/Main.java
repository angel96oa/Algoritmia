
package introduccion_graficos;

import javax.swing.JFrame;

/**
 * Clase principal donde se declaran los objetos y se trabaja con ellos
 * @author Ángel
 */
public class Main {

    public static void main(String[] args) {

        JFrame aplicacion = new JFrame();

        /**
         * ejemplo de ventana
         */
//        aplicacion.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        aplicacion.setSize(600, 600);
//        aplicacion.setTitle("Ejemplo de aplicacion");
//        aplicacion.setVisible(true);
        Dibujo db = new Dibujo();
        aplicacion.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //esta linea permite que al cerrar el pane, termine la ejecución del programa

        aplicacion.add(db);
        aplicacion.setSize(600, 600); //se indica las dimensiones de la ventana
        aplicacion.setVisible(true); //hacemos que sea visible
    }
}
