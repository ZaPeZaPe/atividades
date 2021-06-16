package atividadecadastrop;

import java.io.File;
import java.util.Scanner;

public class ArquivoMain {
    
    public static void main(String[] args) {
        int x, y=0;
        
        Scanner tcld = new Scanner(System.in);
        ControladorArquivo arquivo = new ControladorArquivo();
        File arq = arquivo.criarArquivo("pessoas.txt");
        
        while(y==0){
            System.out.println("----Lista de Pessoas----\n"
            + "---------Opções---------\n"
            + "1) Listar Pessoas\n"
            + "2) Cadastrar Pessoa\n"
            + "3) Sair do programa");
            x = tcld.nextInt();
            switch(x){
                case 1: arquivo.lerArquivo(arq);break;
                case 2: arquivo.escreverArquivo(arq);break;
                case 3: y++;break;
                default: System.out.println("Opção inválida");
            }
        }
    }
    
}
