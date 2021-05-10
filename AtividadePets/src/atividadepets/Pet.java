package atividadepets;

public class Pet {
    private String nome;
    private String raca;
    private int anoNascimento;
    private char sexo;
    
    public Pet(String nome, String raca, int anoNascimento, char sexo){
        this.nome = nome;
        this.raca = raca;
        this.anoNascimento = anoNascimento;
        this.sexo = sexo;
    }
    
    public String getInfoPet(){
        return "\n"+"-" + nome + ", " + raca + ", " + anoNascimento + ", "+ sexo;
    }
}
