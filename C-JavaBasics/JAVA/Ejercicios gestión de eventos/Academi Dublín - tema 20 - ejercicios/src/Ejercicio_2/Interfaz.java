package Ejercicio_2;

import java.awt.Button;
import javax.swing.*;
import java.awt.event.*;
import static java.lang.Math.*;
import java.util.Random;

public class Interfaz extends JPanel implements MouseListener {

    private JButton boton;
    private int contador;

    public Interfaz() {
        this.setLayout(null);

        this.boton = new JButton("Pulsame! ;-)");
        boton.setBounds(10, 100, 120, 20);
        this.boton.addMouseListener(this);
        this.add(boton);

    }

    public void mouseEntered(MouseEvent e) {
        Random r = new Random();

        int x = r.nextInt(this.getWidth() - boton.getWidth());
        if (x < 0) {
            x = 0;
        }

        int y = r.nextInt(this.getHeight()) - this.boton.getHeight();
        if (y < 0) {
            y = 0;
        }

        boton.setLocation(x, y);
        boton.addMouseListener(this);
    }

    @Override
    public void mouseClicked(MouseEvent e) {
    }

    @Override
    public void mousePressed(MouseEvent e) {
    }

    @Override
    public void mouseReleased(MouseEvent e) {
    }

    public void mouseExited(MouseEvent e) {
    }

}
