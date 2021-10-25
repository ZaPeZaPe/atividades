package atividaderegistrojogo;

public class JogoCartas extends Jogo {
    private int qtdJogadores;
    
    public JogoCartas (String nome, float precoUnitario, int clasEtaria, int qtdJogadores){
        super(nome, precoUnitario, clasEtaria);
        this.qtdJogadores = qtdJogadores;
    }
    
    @Override
    public String getInfoJogo(){
        return "Nome: " + nome + " | Pre�o unit�rio: " + precoUnitario + " | Classe Et�ria: " + clasEtaria + " | Quantidade de jogadores: " + qtdJogadores;
    }
}
