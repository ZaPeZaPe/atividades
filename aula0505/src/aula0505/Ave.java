package aula0505;

public class Ave extends Animal {
    
    public Ave(String nome, int idade, char genero) {
        super("Ave", nome, idade, genero);
    }
    
    @Override
    public String emitirSom(){
        return nome + "está gorgeando!";
    }
}
