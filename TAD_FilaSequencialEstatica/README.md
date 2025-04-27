# 📚 Fila Sequencial Estática (FilaEstatica) em _C_

Este projeto implementa uma estrutura de **fila sequencial estática** para armazenar registros de alunos, utilizando a linguagem _C_. A fila é baseada em um vetor de tamanho fixo, com controle dos índices de início e fim, permitindo operações de inserção e remoção de forma eficiente.

---

## 🧱 Estrutura de Dados

A estrutura principal é:

### `FilaEstatica.h`
```c
// ===== Arquivo: FilaEstatica.h =====
#define MAX 100

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct fila Fila;
```

### `FilaEstatica.c`
```c
// ===== Arquivo: FilaEstatica.c =====
struct fila {
    int inicio, final, qtd;
    struct aluno dados[MAX];
};
```

A fila é composta por um vetor fixo (`dados[MAX]`), índices de controle (`inicio` e `final`) e uma variável `qtd` para gerenciar a quantidade atual de elementos.

---

## ⚙️ Funções Disponíveis

### 📦 Criação e Liberação
- `Fila* cria_Fila()`: Cria e inicializa uma nova fila vazia;
- `void libera_Fila(Fila* fi)`: Libera a memória alocada para a fila.

### 🔍 Verificação
- `int tamanho_Fila(Fila* fi)`: Retorna o número de elementos da fila;
- `int Fila_cheia(Fila* fi)`: Retorna 1 se a fila estiver cheia, 0 caso contrário;
- `int Fila_vazia(Fila* fi)`: Retorna 1 se a fila estiver vazia, 0 caso contrário.

### ➕ Inserção
- `int insere_Fila(Fila* fi, struct aluno al)`: Insere um novo aluno no final da fila.

### ➖ Remoção
- `int remove_Fila(Fila* fi)`: Remove o aluno da frente da fila.

### 🔎 Consulta
- `int consulta_Fila(Fila* fi, struct aluno *al)`: Recupera o aluno que está na frente da fila sem removê-lo.

---

## 🛠️ Compilação e Execução

Para compilar o projeto, utilize o seguinte comando no terminal:

```bash
gcc main.c FilaEstatica.c -o programa
```

Para executar:

```bash
./programa
```

---

## 💡 Exemplo de Saída

```
Inserindo alunos na fila...

Imprimindo fila atual:
Matrícula: 123
Nome: Ana
Notas: 8,00, 7,50, 9,00
--------------------------
Matrícula: 456
Nome: Bruno
Notas: 6,00, 6,50, 7,00
--------------------------
Matrícula: 789
Nome: Carlos
Notas: 9,00, 8,50, 9,50
--------------------------

Tamanho atual da fila: 3

Consultando o primeiro aluno da fila:
Aluno na frente da fila:
Matrícula: 123
Nome: Ana
Notas: 8,00, 7,50, 9,00

Removendo o aluno da frente...

Imprimindo fila após remoção:
Matrícula: 456
Nome: Bruno
Notas: 6,00, 6,50, 7,00
--------------------------
Matrícula: 789
Nome: Carlos
Notas: 9,00, 8,50, 9,50
--------------------------

Tamanho atual da fila: 2

Consultando o novo primeiro aluno da fila:
Aluno na frente da fila:
Matrícula: 456
Nome: Bruno
Notas: 6,00, 6,50, 7,00
```

---

## 👨‍💻 Autor

Este projeto é uma implementação didática de uma fila sequencial estática em _C_, com fins de aprendizado e prática em estruturas de dados.
