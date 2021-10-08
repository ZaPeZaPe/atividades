package aula1906;

import java.util.Scanner;

public class desafio3 {
    
    static byte maximoDias[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    
    public static void main(String[] args) {
        
        System.out.println("Informe a data no formato dd/mm/aaaa:");
        Scanner teclado = new Scanner(System.in);
        String data[] = teclado.nextLine().split("/");
        byte dia = Byte.parseByte(data[0]);
        byte mes = Byte.parseByte(data[1]);
        int ano = Integer.parseInt(data[2]);
        if (dataValida(dia, mes, ano)) {
            System.out.println("Data válida");
        } else { 
            System.out.println("Data Inválida");
        }
        
        // Pede para o usuário fornecer uma data no padrão dd/mm/aaaa
        // O método split() pode ser útil
        // Retorna se a data é válida ou não
        
    }
    
    private static boolean dataValida(byte dia, byte mes, int ano) {
        if (dia < 1 || mes < 1 || ano < 1 || mes > 12) {
            return false;
        } else if (mes == 2 && anoBissexto(ano)) {
            return dia<=29;
        } else {
            return dia<=maximoDias[mes];
        }
    }
            
    private static boolean anoBissexto(int ano) {
        
        // 1. todo ano divisível por 400 é bissexto
        // 2. todo ano divisível por 100 não é bissexto
        // 3. ano bissexto é aquele divisível por 4
        
        if (ano%400==0) {
            return true;
        } else if (ano%100==0) {
            return false;
        } else {
            return ano%4==0;
        }
        
    }
}
