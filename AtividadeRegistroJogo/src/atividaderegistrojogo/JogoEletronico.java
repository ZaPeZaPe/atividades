package atividaderegistrojogo;

public class JogoEletronico extends Jogo {
    private float tamanhoGB;
    
    public JogoEletronico (String nome, float precoUnitario, int clasEtaria, float tamanhoGB){
        super(nome, precoUnitario, clasEtaria);
        this.tamanhoGB = tamanhoGB;
    }
    
    @Override
    public String getInfoJogo(){
        return "| Nome: " + nome + " |\n| Pre�o unit�rio: " + precoUnitario + " |\n| Classe Et�ria: " + clasEtaria + " |\n| Tamanho do jogo: " + tamanhoGB +" |";
    }
}
