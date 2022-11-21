package Ejercicio_4;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class Principal {

    public static void main(String[] args) {
        JFrame marco = new JFrame();

        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        marco.setBounds(250, 100, 300, 100); //(x, y, anchura, altura) el 0,0 es la esquina superior izquierda
        marco.setTitle("Cuenta atras!");

        marco.add(new Interfaz());

        marco.setVisible(true);
    }
}
