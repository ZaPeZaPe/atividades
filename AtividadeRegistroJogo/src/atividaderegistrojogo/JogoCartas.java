package atividaderegistrojogo;

public class JogoCartas extends Jogo {
    private int qtdJogadores;
    
    public JogoCartas (String nome, float precoUnitario, int clasEtaria, int qtdJogadores){
        super(nome, precoUnitario, clasEtaria);
        this.qtdJogadores = qtdJogadores;
    }
    
    @Override
    public String getInfoJogo(){
        return "Nome: " + nome + " | Preço unitário: " + precoUnitario + " | Classe Etária: " + clasEtaria + " | Quantidade de jogadores: " + qtdJogadores;
    }
}
