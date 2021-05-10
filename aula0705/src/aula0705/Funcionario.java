package aula0705;

public class Funcionario {
    
    public float getSalarioAnual (float salarioMensal){
        return salarioMensal * 12;
    }
    
    public float getSalarioAnual (float salarioMensal, float impostos){
        return (salarioMensal * 12) - impostos;
    }
    
    public float getSalarioAnual (float salarioMensal, float impostos, float bonus){
        return (salarioMensal * 12) - impostos + bonus;
    }
}
