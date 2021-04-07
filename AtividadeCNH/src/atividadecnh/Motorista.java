package atividadecnh;

public class Motorista {
    private String nome;
    private int anoNascimento;
    private char tipoCNH;

    public String getNome(){
        return this.nome;
    }
    
    public int getAnoNasci(){
        return this.anoNascimento;
    }
    
    public char getTipoCnh(){
        return this.tipoCNH;
    }
    
    public Motorista(String nUser, int anoNasc, char tipoCnh){
        this.nome = nUser;
        this.anoNascimento = anoNasc;
        this.tipoCNH = '-';
    }

    public void tipoC(char opcao){
        if (opcao == 'A' || opcao == 'a'){
            this.tipoCNH = 'A';
        }
        if (opcao == 'B' || opcao == 'b'){
            this.tipoCNH = 'B';
        }
        if (opcao == 'Z' || opcao == 'z'){
            this.tipoCNH = 'Z';
        }
    }

}

