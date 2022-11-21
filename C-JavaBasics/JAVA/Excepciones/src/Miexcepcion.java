public class Miexcepcion extends Exception {    //al heredar de Excepction un objeto new Exception puede:
                                                //ser tratado con try/catch
                                                //ser lanzado con throw
                                                //ser añadido a throws
    
    public Miexcepcion(){
        
    }

    public Miexcepcion(String x){
        super(x);
    }
}
