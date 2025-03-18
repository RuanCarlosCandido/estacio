# Super Trunfo de Países

Este repositório contém implementações do jogo **Super Trunfo de Países**, desenvolvido para as atividades da disciplina **Introdução à Programação de Computadores**. O projeto está organizado em níveis progressivos de dificuldade, cada um em seu respectivo diretório:

- `iniciante`
- `aventureiro`
- (futuros níveis)

## Descrição Geral

Cada nível contém um programa em linguagem `C` que permite cadastrar e exibir duas cartas representando cidades, com informações detalhadas que evoluem conforme o nível:

- Estado
- Código da Carta
- Nome da Cidade
- População
- Área (km²)
- PIB (bilhões de reais)
- Número de Pontos Turísticos

Além disso, níveis mais avançados introduzem cálculos adicionais, como densidade populacional e PIB per capita.

## Tecnologias Utilizadas

- Linguagem: `C`
- Compilador recomendado: `gcc`

## Como Executar

Cada nível possui seu próprio diretório com o código-fonte e o executável correspondente.

1. Clone o repositório principal:

```bash
git clone https://github.com/RuanCarlosCandido/estacio.git
```

2. Navegue até o diretório desejado (`iniciante`, `aventureiro`, etc.):

```bash
cd introducao_a_programacao_de_computadores/iniciante
```
ou
```bash
cd introducao_a_programacao_de_computadores/aventureiro
```

3. Compile o programa (ajuste o nome do arquivo `.c` conforme o nível atual):

```bash
gcc nome_do_programa.c -o nome_do_programa
```

Exemplo para nível iniciante:
```bash
gcc super_trunfo.c -o super_trunfo
```

Exemplo para nível aventureiro:
```bash
gcc super_trunfo_aventureiro.c -o super_trunfo_aventureiro
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
