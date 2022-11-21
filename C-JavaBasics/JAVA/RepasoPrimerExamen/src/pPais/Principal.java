package pPais;


public class Principal {

    public static void main(String[] args) {
        java.util.Random r = new java.util.Random();
        
        Pais[] paises = new Pais[30];
        
        for (int i = 0; i < paises.length; i++) {
            paises[i] = new Pais();
            
            paises[i].ponNombre("Pais Numero " + paises[i].dameNumeroIdentificativo());
            
            paises[i].ponExtension(r.nextFloat());
            
            System.out.println(paises[i]);
        }
        
        Pais menor = menorPais(paises);
        System.out.println("Menor: " + menor);
    }

    public static Pais menorPais(Pais[] paises) {
        Pais masPeq = paises[0];

        for (int i = 1; i < paises.length; i++) {
            if (paises[i].comparar(masPeq) == -1) {
                masPeq = paises[i];
            }

        }

        return masPeq;
    }
}
