package Operaciones;

import javax.swing.JPanel;
import javax.swing.JFrame;

public class Principal {

    public static void main(String[] args) {
        JFrame ventana = new JFrame("Operaciones");
        ventana.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ventana.setBounds(500, 200, 300, 250);
        ventana.add(new miPanel());
        ventana.setVisible(true);

        
    }

}
