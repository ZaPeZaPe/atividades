package desafionumeros;

import java.util.Scanner;

public class DesafioDois {

    public static void main(String[] args) {
        int x=0, y=0, z=0;
        String s;
        while(y!=1){
        System.out.println("Digite um número natural: ");
        Scanner teclado = new Scanner(System.in);
        s = teclado.nextLine();
        z = numeroNatural(s);
        if(z!=0){
            y++;
        }
        }
        x = z-1;
        while(x != 0){
        if (quadradoPerfeito(x) == true){
            System.out.println(x + " é um quadrado perfeito!");
        } else if (numeroPrimo(x) == true){
            System.out.println(x + " é um número primo!");
        }
        x--;
        }
    }
    private static boolean numeroPrimo(int numero) {
        int xis;
        for (int i=2; i<=numero/2; i++) {
            xis = numero%i;
            if (xis == 0) {
                return false;
            }
        }
        return true;
    }
    
    private static boolean quadradoPerfeito(int numero) {
        if (numero == (int) Math.sqrt(numero)*(int) Math.sqrt(numero) && numero!=0){
            return true;
        } else {
            return false;
        }
    }
    
    private static int numeroNatural(String entrada) {
        for (char caractere : entrada.toCharArray()) {
            if (!Character.isDigit(caractere)) return 0;
        }
        return Integer.parseInt(entrada);
    }
    
}
