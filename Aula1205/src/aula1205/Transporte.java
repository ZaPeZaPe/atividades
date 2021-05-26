package aula1205;

public interface Transporte {
    
    float VELOCIDADE_MAXIMA = 120.0f;
    
    String ligar();
    
    float acelerar(float velocidade);
    
    float manobrar(float graus);
    
    float frear(float velocidade);
    
}
