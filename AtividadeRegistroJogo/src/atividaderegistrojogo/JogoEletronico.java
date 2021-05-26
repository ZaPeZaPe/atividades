package atividaderegistrojogo;

public class JogoEletronico extends Jogo {
    private float tamanhoGB;
    
    public JogoEletronico (String nome, float precoUnitario, int clasEtaria, float tamanhoGB){
        super(nome, precoUnitario, clasEtaria);
        this.tamanhoGB = tamanhoGB;
    }
    
    @Override
    public String getInfoJogo(){
        return "| Nome: " + nome + " |\n| Preço unitário: " + precoUnitario + " |\n| Classe Etária: " + clasEtaria + " |\n| Tamanho do jogo: " + tamanhoGB +" |";
    }
}
