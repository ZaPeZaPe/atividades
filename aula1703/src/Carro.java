
public class Carro {
    String placa;
    String modelo;
    String cor;
    int anoFabricacao;
    float peso;
    boolean ligado = false;
    
    void ligar() {
        if (ligado == false) { // verificando se o carro está desligado
            System.out.println("Ligando o carro " + placa);
            ligado = true; // ligando o carro
        } else { // caso o carro já esteja ligado, não deve ligar novamente
            System.out.println("O carro " + placa + " já estava ligado!");
        }
    }
    
    void desligar() {
        if (ligado == true) { // verificando se o carro está desligado
            System.out.println("Desligando o carro " + placa);
            ligado = false; // desligando o carro
        }
    }
}
