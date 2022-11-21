
package introduccion_graficos;

import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JPanel;

/**
 * Clase dibujo donde se crearán los graficos que aparecerán en la ventana creada en el Main.
 * @author Ángel
 */
public class Dibujo extends JPanel {
    int i = 20;

    public void paint(Graphics g) {
        /**
         * con estos ejemplos, se puede visualizar algunos de los metodos usados
         * para dibujar
         */
        g.drawLine(0, 0, 100, 200);
        g.drawRect(200, 0, 100, 200);
        g.drawRect(310, 210, 200, 100);
        g.drawString("d", 300, 300);

        /**
         * Dentro de este bucle for se crean dos funciones y se dibujan
         */
        g.setColor(Color.red);
        for (int i = -300; i < 300; i++) {
            g.drawString("*", 300 + i, 600 - (300 + (int) (10 * Math.sin(i * 0.1))));
            //funcion f
            g.setColor(Color.blue);
            for (int j = -300; j < 300; j++) {
                g.drawString("*", 300 + i, 600 - (300 + (int) (10 * f(i * 0.1))));
            }

        }
        /**
         * las siguientes lineas de codigo provocan que se dibuje un "*" y se vayan superponiendo
         * dando así sensación de que se forma una línea
         */
        
        g.drawString("*", i, i);
        i++;
        if (i < 500) {
            repaint();
        }
    }
    
    /**
     * este método devuelve los puntos de la funcion a dibujar 
     * @param x valor de x
     * @return el resultado de x * x - 15 segun el valor que se le pase por la x
     */
    private double f(double x) {
        return x * x - 15;
    }
}
