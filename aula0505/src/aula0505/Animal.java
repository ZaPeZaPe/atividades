package aula0505;

public class Animal {
    protected String especie;
    protected String nome;
    protected int idade;
    protected char genero;
    protected float energia;
    
    public Animal (String especie, String nome, int idade, char genero){
        this.especie = especie;
        this.nome = nome;
        this.idade = idade;
        this.genero = genero;
        this.energia = 50.0f;
    }
    
    public void comer(){
        if (this.energia > 80.0f) {
            this.energia += (100.0f - this.energia);
        } else { 
            this.energia += 40.0f;
        }
    }
    
    public void mover(){
        if (this.energia > 10.0f){
            this.energia -= 10.0f;
        }
    }
    
    public String getInfo(){
        return String.format("Espécie: %s | Nome: %s | Idade: %d | Sexo: %c", especie, nome, idade, genero);
    }
    
    public String getEnergia(){
        return "Energia restante: " + energia;
    }
    
    public String emitirSom(){
        return nome + "está emitindo um som desconhecido";
    }
}
