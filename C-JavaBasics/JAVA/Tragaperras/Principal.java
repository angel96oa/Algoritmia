package Tragaperras;

import javax.swing.*;


public class Principal extends JPanel {

    public static void main(String[] args) {
        JFrame ventana = new JFrame("Maquina tragaperras");
        ventana.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ventana.setBounds(500, 200, 300, 210);
        ventana.add(new miPanel());
        ventana.setVisible(true);
    }
}
