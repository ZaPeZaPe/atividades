package atividadepets;
import java.util.ArrayList;
import java.util.Scanner;

public class AdocaoMain {

    public static void main(String[] args) {
        String x, y;
        int z, w=0, a;
        Pet ap = new Pet("lolly,", "Husky Siberiano", 2018, 'F');
        Pet ap2 = new Pet("rapidinho", "Golden Retriever", 2021, 'M');
        Pet ap3 = new Pet("mirio", "Poodle", 2019, 'F');
        Pet ap4 = new Pet("azazel", "Buldogue", 2020, 'M');
    
        ArrayList<Pet> petsAdocao = new ArrayList<Pet>();
        petsAdocao.add(ap);
        petsAdocao.add(ap2);
        petsAdocao.add(ap3);
        petsAdocao.add(ap4);
        
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite seu nome");
        x = teclado.nextLine();
        System.out.println("Digite seu CPF");
        y = teclado.nextLine();
        System.out.println("Digite seu ano de nascimento");
        z = teclado.nextInt();
        Pessoa adcp = new Pessoa(x, y, z);
        
        while(w == 0){
            System.out.println("**********");
            System.out.println("1) Adotar pet");
            System.out.println("2) Listar pets adotados");
            System.out.println("3) Listar pets restantes");
            System.out.println("4) Sair");
            System.out.println("**********");
            
            a = teclado.nextInt();
        
            switch (a){
                case 1 -> {System.out.println("**********");
                          realizarAdocao(adcp, petsAdocao, teclado);
                          System.out.println("**********");}
                case 2 -> {System.out.println("**********");
                          listarPetsAdotados(adcp);
                          System.out.println("**********");}
                case 3 -> {System.out.println("**********");
                          listarPetsRestantes(petsAdocao);
                          System.out.println("**********");}
                case 4 -> w=1;
                default -> {System.out.println("**********");
                           System.out.println("Opção inválida!");
                           System.out.println("**********");}
            }
        }
    }
        
    private static void realizarAdocao(Pessoa pessoa, ArrayList<Pet> petsAdocao, Scanner entrada) {
        System.out.println("Informe qual pet deseja adotar: ");
        for (int i = 0; i < petsAdocao.size(); i++) {
            System.out.println(i + " - " + petsAdocao.get(i).getInfoPet());
        }
        int numeroPet = entrada.nextInt();
        Pet candidato = petsAdocao.get(numeroPet);
        if (pessoa.adotarPet(candidato) == true) {
            System.out.println("Pet " + numeroPet + " adotado com sucesso!\n");
            petsAdocao.remove(candidato);
        } else {
            System.out.println("Você já adotou o máximo de pets permitidos!\n");
        }
    }
    
    private static void listarPetsAdotados(Pessoa pessoa) {
        System.out.println("\nPets adotados até o momento: ");
        System.out.println(pessoa.listarPets());
    }
    
    private static void listarPetsRestantes(ArrayList<Pet> petsAdocao) {
        System.out.println("\nPets restantes para adoção: ");
        for (Pet p : petsAdocao) {
            System.out.println(p.getInfoPet());
        }
    }
}

