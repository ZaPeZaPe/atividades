Este programa foi criado com o objetivo de conclusão de uma atividade, segue a proposta:

Crie uma classe ContaBancaria com as seguintes informações:

Atributos (deduza o tipo de cada atributo)
- Nome do banco
- Número da agência
- Número da conta
- Nome do titular
- Tipo (P – Poupança ou C – Corrente)
- Saldo

Métodos a serem implementados (pense nas regras envolvidas para saque e depósito)
- Sacar (valor)
- Depositar (valor)
- Imprimir dados (exibindo os atributos)

Crie uma classe AppMain com o método main() e:
- Instancie um objeto do tipo ContaBancaria, definindo valores para os atributos do objeto instanciado.
- Realize depósitos, saques e uma impressão dos dados a partir do objeto de ContaBancaria criado.

------------- Em seguida foi proposta outra atividade com base nessa acima: -------------------------------------------

Analise a classe ContaBancaria (da atividade anterior) e altere o acesso aos atributos para privado. Implemente os métodos get() e set() para esses atributos, mas somente nos casos considerados convenientes. Por exemplo: não é necessário criar o método setSaldo(), uma vez que os métodos depositar() e sacar() já manipulam o saldo.

Atualize também a classe AppMain, para dar valores os atributos com os set() e pegar os valores com os get().

