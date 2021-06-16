package atividadeinstrumento;
public class FlautaDoce extends InstrumentoMusical {
    public FlautaDoce(){
        super("Flauta", TipoInstrumento.SOPRO);
    }

    @Override
    public String afinar(){
        return "Reencaixando a flauta para a afinação!";
    };

    @Override
    public String tocar(String musica){
        return "Tocando agora " + musica + " na flauta!\n";
    };
}
