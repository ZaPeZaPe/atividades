
package aula0505;


public class Aula0505 {

    
    public static void main(String[] args) {
        Cachorro dog1 = new Cachorro("Sussy", 7, 'M');
        System.out.println(dog1.getInfo());
        dog1.comer();
        System.out.println(dog1.getEnergia());
        
        Ave ave1 = new Ave("Pidgeot", 4, 'F');
        System.out.println(ave1.getInfo());
        ave1.mover();
        System.out.println(ave1.getEnergia());
    }
    
}
