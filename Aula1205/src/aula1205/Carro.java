package aula1205;

public class Carro implements Transporte {
    
    private boolean ligado;
    private float velocidadeAtual;
    private float grausVolante;
    
    public Carro() {
        ligado = false;
        velocidadeAtual = 0.0f;
        grausVolante = 0.0f;
    }

    @Override
    public String ligar() {
        if (ligado == true) {
            return "Carro já estava ligado!";
        } else {
            ligado = true;
            return "Ligou o carro!";
        }
    }

    @Override
    public float acelerar(float velocidade) {
        velocidadeAtual = velocidadeAtual + velocidade; 
        return velocidadeAtual;
    }

    @Override
    public float manobrar(float graus) {
        grausVolante = grausVolante + graus;
        return grausVolante;
    }

    @Override
    public float frear(float velocidade) {
        velocidadeAtual = velocidadeAtual - velocidade;
        return velocidadeAtual;
    }

}
