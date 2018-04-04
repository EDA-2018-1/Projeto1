### Descrição do Projeto

Esse repositório é destinado à execução do primeiro módulo da disciplina EDA da Universidade de Brasília (UnB).

## 1 - Membros

|Nome|Github |
|:--:|:--:|
|**Cecília Dib**|@ceciliadib|
|**Rafael Bragança**|@rafaelbrg|
|**Gabriel Correia**|@gabrielcorreia98|


### Problema 1

<p align="justify"> &emsp;&emsp;Em 1943, McCulloch e Pitts sugeriram um modelo matemático para o funcionamento do neurônio biológico. O neurônio lógico, nome pelo qual ficou conhecido, nada mais representa que uma célula nervosa com a propriedade de poder esta excitada (nível lógico 1) ou inibida (nível lógico 0). O estado de excitação ou inibição é determinado pela seguinte função não linear: se o somatório das entradas ponderadas do neurônio (SOMAP) ultrapassar  um  determinado  limiar  T, a  célula  é  dita  excitada,  caso contrário, a  célula é  dita  inibida.  Em  um  neurônio com  um  vetor  de entrada X, os elementos individuais xi são multiplicados pelos pesos wi, gerando SOMAP</p>

<p align="justify"> &emsp;&emsp;a) Escreva um programa principal que solicita ao usuário 10 valores reais  que  são  guardados  em  um  vetor  ENTRADAS  e  outros  10 valores reais que são guardados em um vetor PESOS. O programa também deve solicitar ao usuário o valor do limiar T. Em seguida a função “fneuronio” descrita abaixo deve ser chamada.</p>

<p align="justify"> &emsp;&emsp;b) Escreva  uma  função “fneuronio”, que  recebe  por  referência (utilizando ponteiros) os vetores ENTRADAS e PESOS, preenchidos pelo usuário, além dos valores do limiar T e do número máximo de elementos do vetor ENTRADAS, e retorna (utilizando ponteiros) o valor 1 caso o neurônio esteja excitado ou 0 caso o neurônio esteja inibido.</p>

<p align="justify"> &emsp;&emsp;c) No programa principal, verificar se o valor de retorno da função “fneuronio” foi  1  ou  0  e  escrever  na  tela  do  computador a mensagem “Neurônio ativado!” ou “Neurôno inibido!”, respectivamente.</p>

### Problema 2

<p align="justify"> &emsp;&emsp;a) Escreva uma função "recebe_notas" que recebe por referência (utilizando ponteiro) um vetor NOTAS, contendo 10 notas, e recebe por valor o número de elementos do vetor, e retorna  outro vetor APR, também com 10 posições, que deve ser preenchido com 1 quando a NOTA referente a i-ésima posição é maior ou igual a 6.0 e 0 caso contrário. O vetor APR indica se o aluno foi aprovado (1) ou não (0).</p>

<p align="justify"> &emsp;&emsp;b) Escreva uma função "conta_notas" que recebe por referência (utilizando ponteiros) o vetor APR e por valor o número de elementos do vetor, e retorna também por referência (utilizando ponteiros) o número de aprovados e o número de reprovados.</p>

<p align="justify"> &emsp;&emsp;c) Escreva uma função "percent_aprov" que recebe o número de aprovados e o número de reprovados e retorna por referência (utilizando ponteiros) a percentagem de reprovados e a percentagem de aprovados. Deve retornar também, via return, o valor 1 se mais da metade da turma foi aprovada e 0 caso contrário.</p>

<p align="justify"> &emsp;&emsp;d) Escreva um programa principal que solicita 10 notas ao usuário, armazena essas notas no vetor NOTAS e, por meio das chamadas das funções que foram criadas, mostre:</p>

> Quantidade de aprovados;

> Quantidade de reprovados;

> Percentual de aprovados;

> Percentual de reprovados; e

> Se mais da metade da turma aprovada.
