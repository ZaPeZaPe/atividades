
package aula1205;

public class TransporteMain {

    public static void main(String[] args) {
        Carro golzinho = new Carro();
        System.out.println(golzinho.ligar());
        System.out.println(golzinho.ligar());
        System.out.println(golzinho.acelerar(20.0f)); // 20 km/h
        System.out.println(golzinho.acelerar(30.0f)); // 50 km/h
        System.out.println(golzinho.frear(15.0f)); // 35 km/h
    }
    
}
