package atividaderobo;

public class RoboMedico implements Robo {

    @Override
    public String ativar() {
        return "Configurando o bisturi do robô médico!";
    }

    @Override
    public String recarregar() {
        return "Recarregando o robô médico na tomada!";
    }
    
    public String cortar (float diametro, float profundidade) {
        return "Cortando com o robô médico. Diâm. (cm): " + diametro + " Profund. (cm): " + profundidade + "\n";
    }
    
}
