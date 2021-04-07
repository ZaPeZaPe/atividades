package atividadebanco;

import java.util.Scanner;

public class AtividadeBanco {

    public static void main(String[] args) {
        int y, x, i = 0;
              
        ContaBancaria util = new ContaBancaria();
        util.setNome("Zap Zap");
        util.setNomeBanco("Bradesco");
        util.setAgencia("040109");
        util.setNumConta("010904");
        util.setTipoConta('C');
        
        Scanner opcao = new Scanner(System.in);
        
        
        while(i == 0){
            System.out.println("Digite a operação que deseja realizar:");
            System.out.println("1 - Consulta de Dados");
            System.out.println("2 - Depósito");
            System.out.println("3 - Saque");
            System.out.println("4 - Sair");
        
            x = opcao.nextInt();
            
            switch(x){
                case 1 -> {
                    System.out.println("-------------------------------------------------------------------");
                    System.out.println("Quais dados você quer saber?");
                    System.out.println("1 - Todos os dados");
                    System.out.println("2 - Nome do Titular");
                    System.out.println("3 - Nome do Banco");
                    System.out.println("4 - Némero da Agência");
                    System.out.println("5 - Némero da Conta");
                    System.out.println("6 - Tipo da Conta");
                    System.out.println("7 - Saldo");
                    y = opcao.nextInt();
                    switch(y){
                        case 1 -> util.dados();
                        case 2 -> {
                                  System.out.println("-------------------------------------------------------------------");
                                  System.out.println("Titular da conta: "+util.getNome());
                                  System.out.println("-------------------------------------------------------------------");
                        }
                        case 3 -> {
                                  System.out.println("-------------------------------------------------------------------");
                                  System.out.println("Nome do Banco: "+util.getNomeBanco());
                                  System.out.println("-------------------------------------------------------------------");
                        }
                        case 4 -> {
                                  System.out.println("-------------------------------------------------------------------");
                                  System.out.println("Número da Agência: "+util.getAgencia());
                                  System.out.println("-------------------------------------------------------------------");
                        }
                        case 5 -> {
                                  System.out.println("-------------------------------------------------------------------");
                                  System.out.println("Número da Conta: "+util.getConta());
                                  System.out.println("-------------------------------------------------------------------");
                        }
                        case 6 -> {
                                  System.out.println("-------------------------------------------------------------------");
                                  System.out.println("Tipo da conta: "+util.getTipo());
                                  System.out.println("-------------------------------------------------------------------");
                        }
                        case 7 -> {
                                  System.out.println("-------------------------------------------------------------------");
                                  System.out.println("Saldo da conta: "+util.getSaldo());
                                  System.out.println("-------------------------------------------------------------------");
                        }
                        default -> {
                                  System.out.println("-------------------------------------------------------------------");
                                  System.out.println("Opção Inválida!");
                                  System.out.println("-------------------------------------------------------------------");
                        }
                    }
                }
                case 2 -> util.depositar();
                case 3 -> util.sacar();
                case 4 -> {
                    System.out.println("Programa Encerrado");
                    i = 1;
                }
                default -> System.out.println("Opção inválida");
            }
        }
    System.out.println("Saldo final ao fechar o programa: R$ "+util.getSaldo());
    }
    
}
