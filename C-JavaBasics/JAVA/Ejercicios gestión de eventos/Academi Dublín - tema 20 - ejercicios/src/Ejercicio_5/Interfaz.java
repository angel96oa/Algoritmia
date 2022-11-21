package Ejercicio_5;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;
import javax.swing.*;

public class Interfaz extends JPanel implements ActionListener {

    private JButton boton;
    private JRadioButton b1;
    private JRadioButton b2;
    private JRadioButton b3;
    private JLabel etiqueta;
    private ButtonGroup bg;

    public Interfaz() {
        this.setLayout(null);

        this.boton = new JButton("mostrar");
        boton.setBounds(10, 10, 100, 30);
        this.boton.addActionListener(this);
        this.add(boton);

        this.b1 = new JRadioButton("A");
        b1.setBounds(20, 50, 100, 10);
        this.b1.addActionListener(this);
        this.add(b1);

        this.b2 = new JRadioButton("B");
        b2.setBounds(20, 70, 100, 10);
        this.b2.addActionListener(this);
        this.add(b2);

        this.b3 = new JRadioButton("C");
        b3.setBounds(20, 90, 100, 10);
        this.b3.addActionListener(this);
        this.add(b3);

        bg = new ButtonGroup();
        bg.add(b1);
        bg.add(b2);
        bg.add(b3);

        this.etiqueta = new JLabel("Ninguno seleccionado");
        etiqueta.setBounds(30, 110, 200, 30);
        this.add(etiqueta);

    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == boton) {
            String s = "Ninguno seleccionado";

            if (b1.isSelected()) {
                s = "Radio 1 seleccionado";
            }
            if (b2.isSelected()) {
                s = "Radio 2 seleccionado";
            }
            if (b3.isSelected()) {
                s = "Radio 3 seleccionado";
            }
            
            this.etiqueta.setText(s);
            JOptionPane.showMessageDialog(null, s);
        }
        
        if (e.getSource() == b1) {
            String s = "Ninguno seleccionado";
            
            if (b1.isSelected()) {
                s = "Radio 1 seleccionado";
            }
            this.etiqueta.setText(s);
            JOptionPane.showMessageDialog(null, s);
        }
        
        if (e.getSource() == b2) {
            String s = "Ninguno seleccionado";
            
            if (b2.isSelected()) {
                s = "Radio 2 seleccionado";
            }
            this.etiqueta.setText(s);
            JOptionPane.showMessageDialog(null, s);
        }
        
        if (e.getSource() == b3) {
            String s = "Ninguno seleccionado";
            
            if (b3.isSelected()) {
                s = "Radio 3 seleccionado";
            }
            this.etiqueta.setText(s);
            JOptionPane.showMessageDialog(null, s);
        }

    }

}
