
public class ClassePrincipal {

    public static void main(String[] args) {
        Carro car1 = new Carro();
        car1.placa = "XYZ 9876";
        car1.modelo = "Gol Atlanta";
        car1.cor = "Vermelho";
        car1.anoFabricacao = 1996;
        car1.peso = 550.5f;
        
        System.out.println("O carro mais top é: " + car1.placa);
        System.out.println("O modelo dele é: " + car1.modelo);
        System.out.println("A cor dele é: " + car1.cor);
        
        car1.ligar();
        car1.ligar();
        car1.desligar();
        
        Carro car2 = new Carro();
        car2.placa = "ABC 1234";
        car2.modelo = "RS5";
        car2.cor = "Preto";
        car2.anoFabricacao = 2021;
        car2.peso = 850.3f;
    }
    
}
