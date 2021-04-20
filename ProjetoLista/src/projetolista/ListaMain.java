package projetolista;

import java.util.ArrayList;

public class ListaMain {

    public static void main(String[] args) {
        ArrayList<String> listaMangas = new ArrayList<String>();
        listaMangas.add("BNHA");
        listaMangas.add("NGNL");
        listaMangas.add("DXD");
        listaMangas.add("SNK");
        listaMangas.add("SNS");
        
        System.out.println("MANGÁS INICIAIS NA LISTA: " + listaMangas);
        System.out.println("\nTAMANHO DA LISTA: " + listaMangas.size());
        listaMangas.remove(2);
        System.out.println("\nAPÓS REMOVER DXD: " + listaMangas);
        
        System.out.println("\nPRIMEIRO MANGÁ DA LISTA: " + listaMangas.get(0));
        System.out.println("\nÚLTIMO MANGÁ DA LISTA: " + listaMangas.get(listaMangas.size()-1));
        
        listaMangas.set(2, "TRL");
        System.out.println("\nAPÓS TROCAR O 3° MANGÁ POR TLR: " + listaMangas);
        
        System.out.println("\nPOSIÇÃO DE NGNL: " + listaMangas.indexOf("NGNL"));
        
        //  for(int pos = 0; pos < listaRoupas.size(); pos=pos+1) {
        //      System.out.println(listaRoupas.get(pos));
        //  }
        
        System.out.println("\nIMPRIMINDO CADA MANGÁ EM UMA LINHA:");
        for(String mangas : listaMangas) {
            System.out.println(mangas);
        }
    }
    
}
