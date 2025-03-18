# Super Trunfo

Este repositório contém implementações do jogo **Super Trunfo**, desenvolvido para as atividades da disciplina **Introdução à Programação de Computadores**. O projeto está organizado em níveis progressivos de dificuldade, cada um em seu respectivo diretório:

- `iniciante`
- `aventureiro`
- `mestre`
- (futuros níveis)

Esses níveis estão presentes nos módulos **Desenvolvendo a Lógica do Jogo** e **Fundamentos e Técnicas Avançadas**.

## Descrição Geral

Cada nível contém um programa em linguagem `C` que permite cadastrar e exibir duas cartas representando cidades ou países, com informações detalhadas que evoluem conforme o nível:

- Estado/País
- Código da Carta
- Nome da Cidade/País
- População
- Área (km²)
- PIB (bilhões de reais)
- Número de Pontos Turísticos
- Densidade Demográfica (habitantes por km², em níveis mais avançados)

Além disso, níveis mais avançados introduzem cálculos adicionais e comparações mais sofisticadas entre as cartas.

## Tecnologias Utilizadas

- Linguagem: `C`
- Compilador recomendado: `gcc`

## Como Executar

Cada nível possui seu próprio diretório com o código-fonte e o executável correspondente.

1. Clone o repositório principal:

```bash
git clone https://github.com/RuanCarlosCandido/estacio.git
```

2. Navegue até o diretório do módulo e nível desejado:

```bash
cd introducao_a_programacao_de_computadores/{modulo}/{nivel}
```

Substitua `{modulo}` por `desenvolvendo_a_logica_do_jogo` ou `fundamentos_e_tecnicas_avancadas` e `{nivel}` por `iniciante`, `aventureiro` ou `mestre`.

Exemplo:
```bash
cd introducao_a_programacao_de_computadores/desenvolvendo_a_logica_do_jogo/mestre
```

3. Compile o programa (ajuste o nome do arquivo `.c` conforme o nível atual):

```bash
gcc nome_do_programa.c -o nome_do_programa
```

Exemplo para nível mestre:
```bash
gcc super_trunfo_mestre.c -o super_trunfo_mestre
```

4. Execute o programa:

```bash
./nome_do_programa
```

## Exemplo de Execução

O programa solicitará as informações das cartas diretamente no terminal. A seguir, um exemplo típico de input (válido para qualquer nível):

```
Insira os dados da Carta 1:
Estado: B
Código da Carta: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área (km²): 1200.25
PIB (bilhões de reais): 300.50
Número de Pontos Turísticos: 30

Insira os dados da Carta 2:
Estado: A
Código da Carta: A01
Nome da Cidade: São Paulo
População: 12325000
Área (km²): 1521.11
PIB (bilhões de reais): 699.28
Número de Pontos Turísticos: 50
```

A saída será formatada com todos os detalhes inseridos e cálculos específicos do nível escolhido.

## Autor

- **Ruan**

