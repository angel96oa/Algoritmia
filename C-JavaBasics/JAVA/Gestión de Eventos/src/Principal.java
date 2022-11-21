
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Principal {

    public static void main(String[] args) {

        JFrame marco = new JFrame();

        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        marco.setBounds(0, 0, 250, 300); //(x, y, anchura, altura) el 0,0 es la esquina superior izquierda

        marco.add(new miPanel());

        marco.setVisible(true);
    }
}
