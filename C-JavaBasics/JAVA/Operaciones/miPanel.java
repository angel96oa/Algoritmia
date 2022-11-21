package Operaciones;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import java.util.Random;

class miPanel extends JPanel implements ActionListener {

    private JLabel op1;
    private JLabel op2;
    private JLabel suma;
    private JLabel resta;
    private JLabel multiplicacion;
    private JLabel division;
    private JTextField o1;
    private JTextField o2;
    private JTextField sum;
    private JTextField res;
    private JTextField multi;
    private JTextField divi;
    private Timer tiempo;

    public miPanel() {
        setLayout(null);
        this.op1 = new JLabel("op1");
        this.op1.setBounds(40, 20, 40, 40);
        this.add(op1);

        this.op2 = new JLabel("op2");
        this.op2.setBounds(40, 70, 40, 40);
        this.add(op2);

        this.suma = new JLabel("+");
        this.suma.setBounds(20, 120, 20, 20);
        this.add(suma);

        this.resta = new JLabel("-");
        this.resta.setBounds(20, 170, 130, 20);
        this.add(resta);

        this.multiplicacion = new JLabel("*");
        this.multiplicacion.setBounds(160, 120, 20, 20);
        this.add(multiplicacion);

        this.division = new JLabel("/");
        this.division.setBounds(160, 170, 20, 20);
        this.add(division);

        this.o1 = new JTextField();
        this.o1.setBounds(90, 32, 120, 20);
        this.add(o1);
        o1.setEditable(false);
        this.o1.addActionListener(this);

        this.o2 = new JTextField();
        this.o2.setBounds(90, 82, 120, 20);
        this.add(o2);
        o2.setEditable(false);
        this.o2.addActionListener(this);

        this.sum = new JTextField();
        this.sum.setBounds(35, 120, 100, 20);
        this.add(sum);
        sum.setEditable(false);
        this.sum.addActionListener(this);

        this.res = new JTextField();
        this.res.setBounds(35, 170, 100, 20);
        this.add(res);
        res.setEditable(false);
        this.res.addActionListener(this);

        this.multi = new JTextField();
        this.multi.setBounds(175, 120, 100, 20);
        this.add(multi);
        multi.setEditable(false);
        this.multi.addActionListener(this);

        this.divi = new JTextField();
        this.divi.setBounds(175, 170, 100, 20);
        this.add(divi);
        divi.setEditable(false);
        this.divi.addActionListener(this);

        tiempo = new Timer(1500, this);
        tiempo.setInitialDelay(0);
        tiempo.start();

    }

    public void actionPerformed(ActionEvent e) {

        if (e.getSource() == tiempo) {
            try {
                Random r = new Random();
                Random q = new Random();
                
                float x = r.nextInt((50) + 1);
                float y = q.nextInt((50) + 1);

                o1.setText(("") + x);
                o2.setText(("") + y);
                
                //suma
                float suma = x + y;
                sum.setText("" + suma);
                //resta
                float resta = x - y;
                res.setText("" + resta);
                //multiplicacion
                float multipl = x * y;
                multi.setText("" + multipl);
                //division
                float divis1 =(float)(x / y);
                float divis2 = (float) (x % y);
                float divis = divis1 + divis2;
                divi.setText("" + divis);

            } catch (NullPointerException z) {
                System.out.println("error");
            }catch(ArithmeticException p){
                divi.setText("error");
            }

        }
    }

}
