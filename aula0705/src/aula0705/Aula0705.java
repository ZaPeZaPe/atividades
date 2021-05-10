
package aula0705;

import java.util.ArrayList;

public class Aula0705 {

    public static void main(String[] args) {
        Funcionario func = new Funcionario();
        System.out.println("Salário puro: (R$)");
        System.out.println(func.getSalarioAnual(12500.0f));
        System.out.println("Salário com impostos: (R$)");
        System.out.println(func.getSalarioAnual(8900.0f, 30000.0f));
        System.out.println("Salário com impostos e bônus: (R$)");
        System.out.println(func.getSalarioAnual(12345.0f, 28000.0f, 8000.0f));
        
        ArrayList<Funcionario> funcionarios = new ArrayList<>();
        
        funcionarios.add(func);
        funcionarios.add(5, func);
    }
    
}
