Esta atividade consiste em fazer um programa simples para cadastro de motoristas que querem tirar a CNH:

Classe Motorista
- Possui os atributos privados: nome (string), anoNascimento (inteiro) e tipoCNH (caractere).
- Possui um construtor com os parâmetros de nome e anoNascimento. Dentro do construtor, os dois atributos são inicializados com os valores recebidos dos parâmetros. E o atributo tipoCNH é inicializado com um traço. Sim, o símbolo -
- Possui os getters dos três atributos.
- Possui o setter do tipoCNH. Dentro do método, é feita a seguinte validação: o atributo tipoCNH só é atualizado se o parâmetro for igual a 'A', 'B' ou 'Z'.

Classe HabilitacaoMain
Dentro do método principal:
- Pede para a pessoa informar o nome e a data de nascimento, guardando os dados em duas variáveis.
- Caso a pessoa tenha nascido após 2003, o programa apenas informa que ela não tem permissão para dirigir.
- Caso contrário:
   - Um objeto Motorista é criado, passando para o construtor as variáveis de nome e data de nascimento obtidas anteriormente.
   - O programa pergunta qual tipo de habilitação a pessoa deseja: A) moto, B) carro ou Z) moto e carro. (No nosso programa é Z mesmo, não é AB).
   - O tipo de CNH escolhido pelo usuário é guardado em uma variável. Dica: o método charAt(<número>) pode ser bem útil aqui.
   - O método setTipoCNH() é chamado, passando a variável acima como parâmetro.
   - O programa exibe as informações do(a) motorista cadastrado. Para isso, chama os getters do objeto criado e os coloca nos prints.