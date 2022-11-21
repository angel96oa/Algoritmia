package pEmpresa;

public class Programador extends Empleado {

    private int LineasPorHora;
    private String TipoLenguaje;

    public Programador(String nombre, int edad, boolean casado, float salario, int LineasPorHora, String TipoLenguaje) {
        super(nombre, edad, casado, salario);
        this.LineasPorHora = LineasPorHora;
        this.TipoLenguaje = TipoLenguaje;

    }
}
