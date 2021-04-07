package atividadebanco;

import java.util.Scanner;

public class ContaBancaria {
    private String nome;
    private String bNome;
    private String agencia;
    private String conta;
    private char tipo;
    private float saldo = 0;
    
    public void setNome(String nome){
        this.nome = nome;
    }
    
    public void setNomeBanco(String bancoNome){
        this.bNome = bancoNome;
    }
    
    public void setAgencia(String numeroAgencia){
        this.agencia = numeroAgencia;
    }
    
    public void setNumConta(String numeroConta){
        this.conta = numeroConta;
    }
    
    public void setTipoConta(char tipo){
        if (tipo == 'C' || tipo == 'P'){
            this.tipo = tipo;
        }
    }
    
    public String getNome(){
        return this.nome;
    }
    
    public String getNomeBanco(){
        return this.bNome;
    }
    
    public String getAgencia(){
        return this.agencia;
    }
    
    public String getConta(){
        return this.conta;
    }
    
    public String getTipo(){
        String TipoC;
        if (tipo == 'C'){
            TipoC = "Corrente";
        }
        else{
            TipoC = "Poupança";
        }
        return TipoC;
    }
    
    public float getSaldo(){
        return this.saldo;
    }
    
    void dados(){
        System.out.println("-------------------------------------------------------------------");
        System.out.println("Banco: "+bNome+" | Agência: "+agencia+" | Número da Conta: "+conta);
        System.out.println("Cliente: "+nome+"| Tipo de conta: "+tipo+" | Saldo: "+saldo);
        System.out.println("-------------------------------------------------------------------");
    }
    
    void sacar(){
        Scanner teclado = new Scanner(System.in);
        System.out.println("-------------------------------------------------------------------");
        System.out.println("Digite o valor para Sacar! (Valor máximo de saque: R$ 500)");
        float novoSaque = teclado.nextFloat();
        if (novoSaque <= saldo && novoSaque > 0 && novoSaque <=500 ){
            saldo -= novoSaque;
            System.out.println("Saque de R$ " +novoSaque+ " realizado com sucesso!");
            System.out.println("Seu saldo atual é: R$ "+saldo);
        }
        else {
            System.out.println("Saldo insuficiente ou o valor limite de saque foi ultrapassado!");
            System.out.println("Seu saldo atual é: R$ "+saldo);
        }
        System.out.println("-------------------------------------------------------------------");
    }
         
    void depositar(){
        Scanner teclado = new Scanner(System.in);
        System.out.println("-------------------------------------------------------------------");
        System.out.println("Digite o valor para deposito!");
        float novoSaldo = teclado.nextFloat();
        if (novoSaldo > 0){
            saldo += novoSaldo;
            System.out.println("Depósito de R$ " +novoSaldo+ " realizado com sucesso!");
            System.out.println("Seu saldo agora é: R$ "+saldo);
        }
        else {
            System.out.println("O valor para depósito precisa ser maior que 0!");
        }
        System.out.println("-------------------------------------------------------------------");
    }
}