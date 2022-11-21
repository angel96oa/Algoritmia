package Ejercicio_4;

import javax.swing.*;
import java.awt.event.*;

public class Interfaz extends JPanel implements ActionListener {

    private JLabel etiqueta;
    private Timer timer;
    private JButton boton;

    int c = 10;

    public Interfaz() {
        this.setLayout(null);

        this.etiqueta = new JLabel("");
        this.etiqueta.setBounds(20, 20, 200, 30);
        this.add(etiqueta);

        this.timer = new Timer(1000, this); //asi dura un segundo
        timer.setInitialDelay(0); //empieza en 0
        timer.start();

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == timer) {
            this.etiqueta.setText("" + c);
            c--;
        }
        if (c == -1) {
            timer.stop();
            JOptionPane.showMessageDialog(null, "FINAL CUENTA ATRAS");
        }

    }

}
