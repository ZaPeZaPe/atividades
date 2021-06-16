package atividadecadastrop;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class ControladorArquivo {
    
    public static File criarArquivo(String arquivo){
        File arq = new File(arquivo);
        try {
            arq.createNewFile();            
        } catch (IOException ex) {
            System.out.println("Não se conectou ao disco!");
        }
        return arq;
    }
    
    public static void escreverArquivo(File arquivo){
        try {
            Scanner dgt = new Scanner(System.in);
            FileWriter escrever = new FileWriter(arquivo.getName(), true);
            System.out.println("Digite o nome da pessoa!");
            escrever.write(dgt.nextLine()+";");
            System.out.println("Digite a idade da pessoa!");
            escrever.write(dgt.nextLine()+";");
            System.out.println("Digite a altura da pessoa!");
            escrever.write(dgt.nextLine()+";\n");
            escrever.close();                        
        } catch (IOException ex) {
            System.out.println("Não se conectou ao disco!");
        }
    }
    
    public static void lerArquivo(File arquivo){
        try {
            Scanner leitura = new Scanner(arquivo);
            while(leitura.hasNextLine()) {
                String linhaAtual = leitura.nextLine();
                System.out.printf("Nome: %s; Idade: %s; Altura: %s;\n", linhaAtual.split(";"));
            }            
        } catch (IOException ex) {
            System.out.println("Não se conectou ao disco!");
        }
    }
}
