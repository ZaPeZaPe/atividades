package projetodepartamento;

public class Funcionario {
    private String nome;
    private String cargo;
    
    public Funcionario(String nome, String cargo) {
        this.nome = nome;
        this.cargo = cargo;
    }
    
    public String getNomeFuncionario(){
        return nome;
    }
    
    public String getCargoFuncionario(){
        return cargo;
    }
}