package Ejercicio_1;


import javax.swing.JFrame;
import javax.swing.JPanel;

public class Principal {

    public static void main(String[] args) {
        JFrame marco = new JFrame();

        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        marco.setBounds(500, 200, 250, 220); //(x, y, anchura, altura) el 0,0 es la esquina superior izquierda

        marco.add(new Interfaz());

        marco.setVisible(true);
    }
}
