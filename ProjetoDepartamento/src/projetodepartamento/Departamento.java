package projetodepartamento;

import java.util.ArrayList;

public class Departamento {
    String nome;
    ArrayList<Funcionario> funcionarios;
    
    public Departamento(String nome){
        this.nome = nome;
        this.funcionarios = new ArrayList<>();
    }
    
    public String getNome() {
        return nome;
    }
    
    public void incluirFuncionario(Funcionario fc){
        funcionarios.add(fc);
    }
    
    public ArrayList<Funcionario> getListarFuncionarios() {
        return funcionarios;
    }
}

