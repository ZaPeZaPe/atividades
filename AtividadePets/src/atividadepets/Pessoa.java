package atividadepets;
import java.util.ArrayList;
public class Pessoa {
    private String nome;
    private String cpf;
    private int anoNascimento;
    private ArrayList<Pet> petsAdotados;
    private static final int MAXIMO_PETS = 2;
    
public Pessoa (String nome, String cpf, int anoNascimento){
    this.nome = nome;
    this.cpf = cpf;
    this.anoNascimento = anoNascimento;
    this.petsAdotados = new ArrayList<>();
}

public boolean adotarPet(Pet animalzinho){
    if (anoNascimento < 2003 && petsAdotados.size() <= MAXIMO_PETS){
        petsAdotados.add(animalzinho);
        return true;
    }
    else{
        return false;
    }
}

public String listarPets(){
    String animais2 = "";
    for (Pet animais : petsAdotados){
        animais2 = animais2 + animais.getInfoPet();
    }
    return animais2;
}
}
