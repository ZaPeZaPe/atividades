package projetodepartamento;

import java.util.ArrayList;

public class Empresa {
    String nome;
    double cnpj;
    int anoFundacao;
    ArrayList<Departamento> departamentos;
    
    public Empresa(String nome, double cnpj, int anoFundacao){
        this.nome = nome;
        this.cnpj = cnpj;
        this.anoFundacao = anoFundacao;
        this.departamentos = new ArrayList<>();
    }
    
    public void criarDepartamento(Departamento dp){
        departamentos.add(dp);
    }
    
    public void buscarDepartamento(int indice){
        departamentos.get(indice);
    }
    
    public String getListaDepartamentos(){
        //departamentos.get(nome, getListarFuncionarios);
    }
    
    public String getDados(){
        //return nome + cnpj + anoFundacao + getListaDepartamentos();
    }
}
