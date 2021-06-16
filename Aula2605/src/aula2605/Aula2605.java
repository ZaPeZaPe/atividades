package aula2605;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Aula2605 {
    public static void main(String[] args) {
        
        File arq = new File("notas.txt");
        try {
            arq.createNewFile();
            
            FileWriter escrever = new FileWriter(arq.getName(), true);
            escrever.write("Bahia campeão\n");
            escrever.close();
            
            Scanner leitura = new Scanner(arq);
            while(leitura.hasNextLine()) {
                String linhaAtual = leitura.nextLine();
                System.out.println(linhaAtual);
            }
            
        } catch (IOException ex) {
            System.out.println("Não se conectou ao disco!");
        }
        System.out.println(arq.getName());
        System.out.println(arq.getAbsolutePath());        
    }

}
