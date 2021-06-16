package atividadeinstrumento;
public class Violao extends InstrumentoMusical {

    public Violao(){
        super("Violão", TipoInstrumento.CORDA);
    }

    @Override
    public String afinar(){
        return "Afinando as cordas do violão!";
    };

    @Override
    public String tocar(String musica){
        return "Tocando agora " + musica + " no violão!";
    };

}
