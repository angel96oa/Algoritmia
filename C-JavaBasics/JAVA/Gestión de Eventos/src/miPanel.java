
import javax.swing.*;
import java.awt.event.*;

public class miPanel extends JPanel implements ActionListener, FocusListener {

    private JLabel etiqueta;
    private JButton boton, boton2;
    private JTextField cTexto;
    private int c1, c2;
    private Timer timer;

    public miPanel() {
        this.setLayout(null);

        this.etiqueta = new JLabel("nombre");
        this.etiqueta.setBounds(20, 20, 200, 30); //la referencia es el jpanel
        this.add(etiqueta);

        this.boton = new JButton("Pulsame");
        this.boton.setBounds(20, 100, 100, 30);
        this.boton.addActionListener(this);
        this.add(boton);

        this.cTexto = new JTextField("");
        this.cTexto.setBounds(80, 20, 150, 20);
        this.cTexto.addActionListener(this);
        this.add(cTexto);
        this.cTexto.addFocusListener(this);

        this.boton2 = new JButton("Pulsame");
        this.boton2.setBounds(20, 150, 100, 30);
        this.boton2.addActionListener(this);
        this.add(boton2);
        

        timer = new Timer(1000, this);
        timer.setInitialDelay(0);
        timer.start();
    }

    public void actionPerformed(ActionEvent e) {
        //System.out.println("hola");
        if (e.getSource() == boton) {
            c1++;
            System.out.println("" + c1);
        }

        if (e.getSource() == boton2) {
            c2++;
            this.cTexto.setText("" + c2);
            timer.start();
        }

        if (e.getSource() == cTexto) {
            if (this.cTexto.getText().isEmpty()) {
                this.boton.setEnabled(false);

            } else {
                this.boton.setEnabled(true);
            }

        }

        if (e.getSource() == timer) {
            System.out.println("Esto se hace cada segundo");
        }
        
        if (c1 == 3) {
            timer.stop();
        }
    }

    public void focusGained(FocusEvent e) {
        this.cTexto.setText("");
    }

    public void focusLost(FocusEvent e) {
        this.cTexto.setText((this.cTexto.getText() + " " + this.boton.getText()));
    }

}
