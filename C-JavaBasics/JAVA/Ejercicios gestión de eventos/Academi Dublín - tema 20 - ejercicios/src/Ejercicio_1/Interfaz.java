package Ejercicio_1;


import javax.swing.*;
import java.awt.event.*;

public class Interfaz extends JPanel implements ActionListener, FocusListener {

    private JButton boton1, boton2;
    private JTextField texto1, texto2;

    public Interfaz() {
        this.setLayout(null);

        this.boton2 = new JButton("Hola, soy el boton2");
        this.boton2.setBounds(20, 140, 200, 30);
        this.add(boton2);
        this.boton2.addActionListener(this);

        this.boton1 = new JButton("Hola, soy el boton1");
        this.boton1.setBounds(20, 100, 200, 30);
        this.add(boton1);
        this.boton1.addActionListener(this);

        this.texto2 = new JTextField();
        this.texto2.setBounds(20, 50, 200, 30);
        this.add(texto2);
        this.texto2.addActionListener(this);

        this.texto1 = new JTextField();
        this.texto1.setBounds(20, 10, 200, 30);
        this.add(texto1);
        this.texto1.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        
        if (e.getSource() == texto1) {
            if (this.texto1.getText().isEmpty()) {
                this.texto1.setEnabled(false);
            } else {
                this.texto1.setEnabled(true);
            }
        }
        
        if (e.getSource() == texto2) {
            if (this.texto2.getText().isEmpty()) {
                this.texto2.setEnabled(false);
            } else {
                this.texto2.setEnabled(true);
            }
        }
        
        if (e.getSource() == boton1) {
            this.texto2.setText("");
        }
        
        if (e.getSource() == boton2) {
            this.texto1.setText("");
        }

    }

    @Override
    public void focusGained(FocusEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void focusLost(FocusEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

}
