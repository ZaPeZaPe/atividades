package atividaderegistrojogo;

public class Jogo {
    protected String nome;
    protected float precoUnitario;
    protected int clasEtaria;
    
    public Jogo (String nome, float precoUnitario, int clasEtaria){
        this.nome = nome;
        this.precoUnitario = precoUnitario;
        this.clasEtaria = clasEtaria;
    }
    
    public String getInfoJogo(){
        return "Nome: " + nome + " | Pre√ßo unit·rio: " + precoUnitario + " | Classe Et·ria: " + clasEtaria;
    }
}
