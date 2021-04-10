package atividadegeometria;

public class Circulo {
    private double raio;
    private static double pi;
    
    public Circulo (double raio) {
        this.raio = raio;
    }
    
    public double getArea(){
        return pi * (raio*raio);
    }
    
    public double getCircunferencia(){
        return 2 * pi * raio;
    }
     
    public static void setPi(double pi){
        Circulo.pi = pi;
    }
}
