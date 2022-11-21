package Tragaperras;

import javax.swing.*;
import java.awt.event.*;
import java.util.Random;

class miPanel extends JPanel implements ActionListener {

    private JButton insertCoin;
    private JButton numeros;
    private JTextField msegundos;
    private JLabel info;
    private Timer t;
    private int bote = 0;
    Random r = new Random();
    Random s = new Random();
    int q;
    int p;

    public miPanel() {

        this.setLayout(null);

        this.insertCoin = new JButton("insert coin");
        this.insertCoin.setBounds(20, 80, 250, 40);
        this.add(insertCoin);
        this.insertCoin.addActionListener(this);

        this.numeros = new JButton();
        this.numeros.setBounds(20, 20, 110, 40);
        this.add(numeros);
        this.numeros.addActionListener(this);

        this.msegundos = new JTextField();
        this.msegundos.setBounds(160, 20, 110, 40);
        this.add(msegundos);

        this.info = new JLabel();
        this.info.setBounds(20, 130, 250, 40);
        this.add(info);

       
        t = new Timer(200, this);
        t.setDelay(0);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == insertCoin) {
            
            bote++;
            t.start();
            info.setText("Hay " + bote + " monedas");
            insertCoin.setEnabled(false);
        }

        if (e.getSource() == t) {

            int m = 10;
            int n = 1;
            int t = 9;
            int d = 0;
            q = r.nextInt(m - n + 1);
            p = s.nextInt(t - d + 1);
            this.numeros.setText(("") + q + p);
        }
        if (e.getSource() == numeros) {
            t.stop();
            insertCoin.setEnabled(true);
            if (q == p) {
                info.setText("Has ganado " + bote + " monedas");
                bote = 0;
            }
        }
    }
}
