package atividaderevisao;

import java.util.Scanner;

public class AtividadeRevisao {
    public static void main(String[] args) {
    System.out.println("Digite um número inteiro!");
    Scanner sc = new Scanner(System.in);
    int menor = sc.nextInt();
    for (int i=1; i<5; i++){
        System.out.println("Digite outro número inteiro!");
        int num = sc.nextInt();
        if (menor > num){
            menor = num;
        }
    }
    System.out.println("O número "+ menor +" é o menor número digitado!");
}
}
