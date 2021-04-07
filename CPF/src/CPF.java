import java.util.Scanner;

public class CPF {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("Informe os 9 primeiros dígitos do CPF (apenas números): ");
        String digitos = teclado.next();
        
        int[] cpf = converterStringParaVetorInt(digitos);
        
        cpf = calculadorDeDigitosCpf(digitos);
    
        System.out.println("CPF completo: " + converterVetorIntParaString(cpf));
    }
    
    // Esta função converte o CPF (os 9 dígitos informados na entrada) de String para um vetor de int
    // Também insere dois 0 no fim, para completar os 11 dí­gitos de um CPF
    // Ex.: "963852741" vira [9, 6, 3, 8, 5, 2, 7, 4, 1, 0, 0]
    static int[] converterStringParaVetorInt(String cpfString) {
        int[] cpfNumerico = new int[11];
        for (int i = 0; i < cpfString.length(); i++) {
            cpfNumerico[i] = Character.getNumericValue(cpfString.charAt(i));
        }
        return cpfNumerico;
    }
    
    // Esta função converte o CPF de vetor de int (usado nos cálculos) para String
    // Ex.: [9, 6, 3, 8, 5, 2, 7, 4, 1, 2, 8] vira "96385274128"
    static String converterVetorIntParaString(int[] cpfNumerico) {
        String cpfString = "";
        for (int i = 0; i < cpfNumerico.length; i++) {
            cpfString += Integer.toString(cpfNumerico[i]);
        }
        return cpfString;
    }
    
    // Essa função pega o cpf digitado anteriormente e calcula quais são os ultimos dois digitos!
    // Ex.: 657116450 --> + 72 = 65711645072
    static int[] calculadorDeDigitosCpf(String cpfString) {
        int[] cpfNumerico = new int[11];
        for (int i = 0; i < cpfString.length(); i++) {
            cpfNumerico[i] = Character.getNumericValue(cpfString.charAt(i));
        }
        int L = 0;
        for (int i = 0; i < cpfNumerico.length; i++) {
            L += (10-i)*cpfNumerico[i];
        }
        int resto = L%11;
        if (resto == 0 || resto == 1){
            cpfNumerico[9] = 0;
        }
        else {
            cpfNumerico[9] = 11 - resto;
        }
        int M = 0;
        for (int i = 1; i < cpfNumerico.length; i++) {
            M += ((10-(i-1))*cpfNumerico[i]);
        }
        resto = M%11;
        if (resto == 0 || resto == 1){
            cpfNumerico[10] = 0;
        }
        else {
            cpfNumerico[10] = 11 - resto;
        }
        return cpfNumerico;
    }
}