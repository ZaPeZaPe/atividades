package QuestaoTres;
import java.util.*;

public class Questao03 {

	public static void main(String[] args) {
		double v1, res;
		char C, c;
		Scanner teclado = new Scanner(System.in);
		
		//a) 1,00 real = 0,19 d�lares
		//c) 1,00 real = 0,16 euros
		//d) 1,00 euro = 6,30 reais
		//f) 1,00 euro = 1,17 d�lares
		//e) 1,00 d�lar = 0,86 euros
		//b) 1,00 d�lar = 5,39 reais
		
		System.out.println("Digite a qual � a moeda inicial para realizar a convers�o!");
		System.out.printf("Moedas aceitas: \nDolar\nEuro\nReal\n");
		C = teclado.next().charAt(0);
		c = Character.toLowerCase(C);
		if (c == 'd') {
			System.out.println("Digite para qual moeda quer converter!");
			System.out.printf("Convers�es dispon�veis: \nEuro\nReal\n");
			C = teclado.next().charAt(0);
			c = Character.toLowerCase(C);
			if (c == 'e') {
				System.out.println("Digite a quantidade que deseja converter de D�lar para Euro!");
				v1 = teclado.nextDouble();
				res = v1*0.86;
				System.out.println("Valor de US$ "+v1+" convertido em � "+res);				
			} else if (c == 'r') {
				System.out.println("Digite a quantidade que deseja converter de D�lar para Real!");
				v1 = teclado.nextDouble();
				res = v1*5.39;
				System.out.println("Valor de US$ "+v1+" convertido em R$ "+res);
			} else {
				System.out.println("Covers�o n�o dispon�vel!");
			}
			
		} else if (c == 'e') {
			System.out.println("Digite para qual moeda quer converter!");
			System.out.printf("Convers�es dispon�veis: \nDolar\nReal\n");
			C = teclado.next().charAt(0);
			c = Character.toLowerCase(C);
			if (c == 'd') {
				System.out.println("Digite a quantidade que deseja converter de Euro para D�lar!");
				v1 = teclado.nextDouble();
				res = v1*1.17;
				System.out.println("Valor de � "+v1+" convertido em US$ "+res);				
			} else if (c == 'r') {
				System.out.println("Digite a quantidade que deseja converter de Euro para Real!");
				v1 = teclado.nextDouble();
				res = v1*6.30;
				System.out.println("Valor de � "+v1+" convertido em R$ "+res);
			} else {
				System.out.println("Covers�o n�o dispon�vel!");
			}
		} else if (c == 'r') {
			System.out.println("Digite para qual moeda quer converter!");
			System.out.printf("Convers�es dispon�veis: \nDolar\nEuro\n");
			C = teclado.next().charAt(0);
			c = Character.toLowerCase(C);
			if (c == 'd') {
				System.out.println("Digite a quantidade que deseja converter de Real para Dolar!");
				v1 = teclado.nextDouble();
				res = v1*0.19;
				System.out.println("Valor de R$ "+v1+" convertido em US$ "+res);				
			} else if (c == 'e') {
				System.out.println("Digite a quantidade que deseja converter de Real para Euro!");
				v1 = teclado.nextDouble();
				res = v1*0.16;
				System.out.println("Valor de R$ "+v1+" convertido em � "+res);
			} else {
				System.out.println("Covers�o n�o dispon�vel!");
			}
		} else {
			System.out.println("Covers�o n�o dispon�vel!");
		}

	}

}