package pEmpresa;

public class Empleado {

    private String nombre;
    private int edad;
    private boolean casado;
    private float salario;

    public Empleado(String nombre, int edad, boolean casado, float salario) {
        nombre = this.nombre;
        edad = this.edad;
        casado = this.casado;
        salario = this.salario;
    }

    public void Nivel() {
        if (this.edad <= 21) {
            System.out.println("principiante");

        } else if (this.edad > 21 && this.edad < 35) {
            System.out.println("intermedio");
        } else if (this.edad >= 35) {
            System.out.println("senior");
        } else {
            System.out.println("fuera de los limites de edad");
        }
    }

    public String toString() {
        String s = new String();
        s = s + "Nombre: " + this.nombre + "\n";
        s = s + "Edad: " + this.edad + "\n";
        s = s + "Casado: " + this.casado + "\n";
        s = s + "Salario: " + this.salario + "\n";

        return s;
    }

    public void aumentarSalario(float s, float p) {
        s = p * salario;
        System.out.println(s);
    }
}
