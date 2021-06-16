package atividadeinstrumento;
public abstract class InstrumentoMusical {
    private String nome;
    private TipoInstrumento TipoInstrumento;

    public InstrumentoMusical (String nome, TipoInstrumento TipoInstrumento){
        this.nome = nome;
        this.TipoInstrumento = TipoInstrumento;
    }

    public abstract String afinar();

    public abstract String tocar(String musica);

}
