# Fila Sequencial Estática – Estrutura de Dados em _C_

Este projeto tem como objetivo ensinar e demonstrar, de forma prática, a implementação de uma **Fila Sequencial Estática** em linguagem _C_. O conteúdo foi preparado para auxiliar no aprendizado de estruturas de dados lineares.

O código está na pasta `codigo`.

---

## 🧱 Tabela de Conteúdo

- [Fila Sequencial Estática](#fila-sequencial-estática)
  - [Características](#características)
  - [Estrutura da Fila](#estrutura-da-fila)
- [Arquivos do Projeto](#arquivos-do-projeto)
- [Operações Fundamentais](#operações-fundamentais)
- [Vantagens e Desvantagens](#vantagens-e-desvantagens)
- [Quando Utilizar](#quando-utilizar)
- [Referências](#referências)

---

## 🧱 Fila Sequencial Estática

Uma fila sequencial estática é implementada utilizando **alocação estática** e **acesso sequencial** dos elementos por meio de um _array_. Cada elemento sucessor ocupa a posição física seguinte ao seu antecessor.

### Características

- **Facilidade de criação e destruição:** alocação e liberação simples de memória.
- **Tamanho fixo:** o tamanho máximo da fila precisa ser definido previamente.
- **Acesso rápido:** inserção no final e remoção do início respeitando a ordem FIFO (_First-In, First-Out_).

Essa abordagem é indicada para **filas pequenas** ou quando o **tamanho máximo é conhecido** previamente.

---

## 📐 Estrutura da Fila

A estrutura da fila é composta por:

- `inicio`: posição do primeiro elemento da fila.
- `final`: posição onde o próximo elemento será inserido.
- `qtd`: quantidade atual de elementos armazenados.
- `dados[]`: array que armazena os elementos (neste caso, registros de alunos).

A estrutura é encapsulada no arquivo `.c`, garantindo que o usuário interaja apenas por meio das funções públicas.

---

## 📂 Arquivos do Projeto

### `FilaEstatica.h`
- Define:
  - A constante `MAX` (tamanho máximo da fila).
  - O tipo de dado armazenado (`struct aluno`).
  - O tipo `Fila` (definido via `typedef`).
- Declara os protótipos das funções públicas:
  - Criar e destruir fila.
  - Inserir, remover e consultar elementos.
  - Verificar se a fila está cheia ou vazia.
  - Obter o tamanho da fila.

### `FilaEstatica.c`
- Implementa:
  - A estrutura interna da fila com `inicio`, `final`, `qtd` e `dados[]`.
  - As funções para manipulação da fila.
- Os campos internos são ocultos ao usuário.

### `main.c`
- Demonstra:
  - A criação de uma fila.
  - Inserção de alunos.
  - Impressão dos elementos da fila.
  - Consulta do primeiro elemento.
  - Remoção de elementos e nova impressão.

O usuário interage com a fila apenas através de um ponteiro:

```c
Fila *fi;
```

---

## ✏️ Operações Fundamentais

- **Criar Fila:** aloca memória e inicializa `inicio`, `final` e `qtd` em 0.
- **Inserir Elemento:** adiciona um novo aluno na posição `final` e atualiza o contador.
- **Remover Elemento:** remove o elemento do início da fila e ajusta o ponteiro `inicio`.
- **Consultar Elemento:** acessa o primeiro aluno da fila sem removê-lo.
- **Liberar Fila:** libera a memória alocada.

---

## ✅ Vantagens e ❌ Desvantagens

### Vantagens

- Simples de implementar.
- Acesso direto via índice.
- Operações de inserção e remoção em tempo constante (O(1)).

### Desvantagens

- Tamanho fixo (limitado pela constante `MAX`).
- Necessidade de deslocamento circular ao inserir ou remover elementos.

---

## 📌 Quando Utilizar

- Em filas de tamanho pequeno ou médio.
- Quando o número máximo de elementos pode ser definido antecipadamente.
- Quando o controle e simplicidade do código são prioridades.

---

## 📚 Referências

### Referência Básica
- Backes, Andre Ricardo. _Algoritmos e Estruturas de Dados em Linguagem C_. LTC, 2022.
- Ascencio, Ana Fernanda Gomes. _Análise de Algoritmos e Estrutura de Dados_. Prentice Hall, 2010.

### Referência Complementar
- _Estruturas de Dados e Seus Algoritmos_. LTC, 2009.
- Tenenbaum, Aaron M., et al. _Estruturas de Dados Usando C_. Pearson Makron Books, 1995.

---

Este material foi elaborado como parte de uma aula prática sobre Estruturas de Dados em _C_.

# TAD_FilaSequencialEstatica
Implementação prática do Tipo Abstrato de Dados (TAD) **Fila Sequencial Estática**.
