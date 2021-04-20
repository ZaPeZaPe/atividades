package atividadegeometria;

public class AtividadeGeometria {

    public static void main(String[] args) {
        
        Quadrado.setDiag(1.41);
        
        Quadrado util = new Quadrado(2.5);
        
        System.out.println("");
        System.out.println("---- Quadrado com parâmetro 1,41 ----");
        System.out.println("Área do Quadrado: "+util.getArea()+" cm²");
        System.out.println("Perimetro do Quadrado: "+util.getPerimetro()+" cm");
        System.out.println("Diagonal do Quadrado: "+util.getDiagonal()+" cm");
        
        Quadrado.setDiag(Math.sqrt(2));
        
        System.out.println("");
        System.out.println("---- Quadrado com parâmetro Math Class ----");
        System.out.println("Área do Quadrado: "+util.getArea()+" cm²");
        System.out.println("Perimetro do Quadrado: "+util.getPerimetro()+" cm");
        System.out.printf("Diagonal do Quadrado: %.3f cm\n",util.getDiagonal());
        
        Circulo.setPi(3.14);
        
        Circulo util2 = new Circulo(2.5);
        
        System.out.println("");
        System.out.println("---- Círculo com parâmetro 3,14 ----");
        System.out.println("Área do Círculo: "+util2.getArea()+" cm²");
        System.out.printf("Cirscunferência do Círculo: %.3f cm\n",util2.getCircunferencia());
        
        Circulo.setPi(Math.PI);
        
        System.out.println("");
        System.out.println("---- Círculo com parâmetro Math Class ----");
        System.out.printf("Área do Circulo: %.3f cm²\n",util2.getArea());
        System.out.printf("Circunferência do Circulo: %.3f cm\n",util2.getCircunferencia());
    }
    
}
