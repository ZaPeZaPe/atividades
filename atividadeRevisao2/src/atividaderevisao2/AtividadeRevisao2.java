package atividaderevisao2;

import java.util.Scanner;

public class AtividadeRevisao2 {
    public static void main(String[] args) {
        int n = 3;
        float media = 0;
        float nota[] = new float[n];
    System.out.println("Digite suas três notas obtidas em DS1!");
    Scanner sc = new Scanner(System.in);
    for (int i=0; i<n; i++){
        System.out.println("Digite a "+ (i+1) +"° nota!");
        nota[i] = sc.nextFloat();
        }
    for (int i=0; i<n; i++){
        media += nota[i];
    }
    media = media/3;
    if (media>=9){
        System.out.println("Seu conceito na disciplina foi: A");
    }
    else if (media<=8.9 && media>=8){
        System.out.println("Seu conceito na disciplina foi: B");
    }
    else if (media<=7.9 && media>=7){
        System.out.println("Seu conceito na disciplina foi: C");
    }
    else if (media<=6.9 && media>=6){
        System.out.println("Seu conceito na disciplina foi: D");
    }
    else{
        System.out.println("Seu conceito na disciplina foi: F");
    }
}
}

