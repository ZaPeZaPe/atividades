package atividaderevisao;

import java.util.Scanner;

public class AtividadeRevisao {
    public static void main(String[] args) {
    System.out.println("Digite um número inteiro!");
    Scanner sc = new Scanner(System.in);
    int maior = sc.nextInt();
    for (int i=1; i<5; i++){
        System.out.println("Digite outro número inteiro!");
        int num = sc.nextInt();
        if (maior < num){
            maior = num;
        }
    }
    System.out.println("O número "+ maior +" é o maior número digitado!");
}
}
