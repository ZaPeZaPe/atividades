package atividaderobo;

public class RoboArqueologo implements Robo{

    @Override
    public String ativar() {
        return "Preparando a pá do robô arqueólogo!";
    }

    @Override
    public String recarregar() {
        return "Trocando a bateria do robô arqueólogo!";
    }
    
    public String cavar (float profundidade) {
        return "Cavando com o robô arqueólogo. Profund. (m): " + profundidade;
    }

}
