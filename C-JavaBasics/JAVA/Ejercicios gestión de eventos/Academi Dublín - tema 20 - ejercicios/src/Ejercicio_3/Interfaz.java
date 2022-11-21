package Ejercicio_3;

import javax.swing.*;
import java.awt.event.*;

public class Interfaz extends JPanel implements MouseMotionListener {

    private JButton boton;
    private JTextField texto;

    public Interfaz() {
        this.setLayout(null);

        this.boton = new JButton("HOLA :D");
        boton.setBounds(70, 50, 100, 75);
        this.add(boton);
        this.boton.addMouseMotionListener(this);

        this.texto = new JTextField("");
        texto.setBounds(70, 150, 200, 50);
        this.add(texto);
        this.texto.addMouseMotionListener(this);

    }

    @Override
    public void mouseDragged(MouseEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void mouseMoved(MouseEvent e) {
        if (e.getSource() == boton) {
//            System.out.println(e.getPoint());
            this.texto.setText(""+e.getPoint());
        }
    }

}
