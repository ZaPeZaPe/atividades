package aula0505;

public class Cachorro extends Animal {
    
    public Cachorro(String nome, int idade, char genero) {
        super("Cachorro", nome, idade, genero);
    }
    
    @Override
    public String emitirSom(){
        return nome + "está latindo!";
    }
}
