package pPersonas;

public class Principal {
    public static void main(String[] args) {
   
        Persona p = new Persona("juan", 18, 50.0f, 565323);
        Alumno a = new Alumno("Pepe", 18, 50.0f, 475849, "Primero");
        Empleado e = new Empleado("Antonio", 18, 50.0f, 475849, "S.A.", "jefe");
        Profesor pr = new Profesor("Angel", 18, 45.5f, 47439,"S.L.", "programador", "Jefe");
        PAS pa = new PAS("Iker", 30, 66.7f, 34565, "programador", "empleado");
        Directivo d = new Directivo("carmen", 40, 60.0f, 345345, "microsoft", "programador", "jefa");
//        
//        p.saludo();
//        a.saludo();
//        e.saludo();
//        pr.saludo();
//        
        p.toString();
        a.toString();
        e.toString();
        pr.toString();
        pa.toString();
        d.toString();
    }
}
